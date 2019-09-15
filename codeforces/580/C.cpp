#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int m,ans;


void dfs(vector <int> adj[],int src,bool xx[],bool visited[],int c[])
{

    visited[src]=true;

    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            if(xx[x]==1)
            {
                c[x]=c[src]+1;
            }
            else
                c[x]=0;


            //cout<<x<<" ***"<<c[x]<<endl;

            if(adj[x].size()==1 && c[x]<=m)
            {
                ans++;
            }

            if(c[x]<=m)
                dfs(adj,x,xx,visited,c);
        }

    }



}

int main()
{
    faster

    int n;
    cin>>n>>m;

    vector <int> adj[n+1];


    bool xx[n+1],visited[n+1];
    int c[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>xx[i];
        visited[i]=false;
        c[i]=0;

    }



    int u,v;
    for(int i=0; i<n-1; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    if(xx[1]==1)
        c[1]=1;


    dfs(adj,1,xx,visited,c);




    cout<<ans<<endl;




    return 0;
}


