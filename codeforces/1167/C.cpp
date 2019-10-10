#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int nn,c;

void dfs(int src,vector <int> adj[],bool visited[],int grp[])
{

    visited[src]=true;

    //cout<<src<<" ** "<<endl;;
    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            nn++;
            grp[x]=c;
            dfs(x,adj,visited,grp);
        }

    }

}


int main()
{
    faster

    int n,m;
    cin>>n>>m;


    vector<int> adj[n+1];
    bool visited[n+1];
    int grp[n+1];

    for(int i=1; i<=n; i++)
        visited[i]=false;



    int u,x,temp;
    for(int i=0; i<m; i++)
    {
        cin>>x;
        for(int j=0; j<x; j++)
        {
            cin>>u;
            if(j==0)
            {
                temp=u;
            }
            else
            {
                //cout<<temp<<" --- "<<u<<endl;
                adj[temp].push_back(u);
                adj[u].push_back(temp);
                temp=u;

            }
        }
    }

    vector<int> ppl;

    for(int i=1; i<=n; i++)
    {
        if(visited[i]==false)
        {
            nn=1;
            grp[i]=c;
            dfs(i,adj,visited,grp);
            c++;

            ppl.push_back(nn);

            //cout<<nn<<" nn"<<endl;

        }

    }

    //cout<<"c= "<<c<<endl;


    for(int i=1; i<=n; i++)
    {
        cout<<ppl[grp[i]]<<" ";
    }
    cout<<endl;






    return 0;
}
