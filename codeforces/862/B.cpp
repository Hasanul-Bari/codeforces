#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

void bfs(vector<int> adj[],int n,int src)
{
    bool visited[n+1]= {false};
    ll level[n+1];
    queue <int> q;

    visited[src]=true;
    level[src]=0;

    q.push(src);

    while(q.empty()!=1)
    {
        int x=q.front();
        q.pop();
        for(int i=0; i<adj[x].size(); i++)
        {
            int y=adj[x][i];
            if(visited[y]==false)
            {
                visited[y]=true;
                level[y]=level[x]+1;
                q.push(y);
            }
        }
    }

    ll e=0, o=0;
    for(int i=1; i<=n; i++)
    {
        //cout<<i<<" "<<level[i]<<endl;
        if(level[i]%2==0)
            e++;
        else
            o++;
    }

    cout<<(e*o)-(n-1)<<endl;


}


int main()
{
    faster

    int n;
    cin>>n;
    vector <int> adj[n+1];

    int u,v;
    for(int i=0; i<n-1; i++)
    {
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }



    bfs(adj,n,1);



    return 0;
}

