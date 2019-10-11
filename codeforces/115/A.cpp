#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int mx;

void bfs(vector<int> adj[],int n,int level[],int src)
{

    queue <int> q;

    level[src]=1;

    q.push(src);

    while(q.empty()!=1)
    {
        int x=q.front();
        q.pop();
        //cout<<level[x]<<endl;
        if(mx<level[x])
            mx=level[x];


        for(int i=0; i<adj[x].size(); i++)
        {
            int y=adj[x][i];
            if(level[y]==-1)
            {

                level[y]=level[x]+1;
                q.push(y);
            }
        }
    }


}


int main()
{
    faster

    int n,e;
    cin>>n;
    vector <int> adj[n+1];
    vector<int> sr;

    int u;
    for(int i=1; i<=n; i++)
    {
        cin>>u;

        if(u!=-1)
        {
            adj[u].push_back(i);
            adj[i].push_back(u);
        }
        else
            sr.push_back(i);



    }


    int level[n+1];

    for(int i=1; i<=n; i++)
        level[i]=-1;

    for(int i=0; i<sr.size(); i++)
    {
            bfs(adj,n,level,sr[i]);
    }


    cout<<mx<<endl;






    return 0;
}


