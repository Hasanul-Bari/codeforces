#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


void dfs(int src,vector<int> adj[],bool visited[])
{

    visited[src]=true;

    //cout<<src<<" ";
    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            dfs(x,adj,visited);
        }

    }


}


int main()
{
    faster
    int n,m,k,x;
    cin>>n>>m;

    vector<int> v[m+1];
    bool visited[n+1];

    int cc=0;
    for(int i=1; i<=n; i++)
    {
        visited[i]=false;

        cin>>k;
        if(k==0)
            cc++;
        while(k--)
        {
            cin>>x;
            v[x].pb(i);
        }
    }

    vector<int> adj[n+1];
    int tmp;


    for(int i=1; i<=m; i++)
    {

        for(int j=1; j<v[i].size(); j++)
        {
            int x=v[i][j-1];
            int y=v[i][j];

            //cout<<x<<" -- "<<y<<endl;

            adj[x].pb(y);
            adj[y].pb(x);
        }
    }



    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(visited[i]==false)
        {
            c++;
            dfs(i,adj,visited);
        }
    }

    cout<<max(c-1,cc)<<endl;



    return 0;
}
