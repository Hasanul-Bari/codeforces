#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;


ll mx;



void dfs(int src,vector <int> adj[],bool visited[],int c[])
{

    visited[src]=true;

    if(mx>c[src])
        mx=c[src];

    //cout<<src<<" ";
    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            dfs(x,adj,visited,c);
        }

    }


}

int main()
{
    faster

    int n,e;
    cin>>n>>e;

    vector <int> adj[n+1];
    int c[n+1];
    bool visited[n+1];

    for(int i=1; i<=n; i++)
    {
        cin>>c[i];
        visited[i]=false;
    }



    int u,v;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    ll s=0;
    for(int i=1; i<=n; i++)
    {
        if(visited[i]==false)
        {
            mx=1e10;
            dfs(i,adj,visited,c);
            //cout<<mx<<endl;
            s=s+mx;
        }

    }

    cout<<s<<endl;


    return 0;
}
