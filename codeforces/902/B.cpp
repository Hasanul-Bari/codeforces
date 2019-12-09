#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;


int cc;


void dfs(int src,int c[],vector<int> adj[])
{

    //visited[src]=true;

    //cout<<src<<" "<<cc<<endl;
    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        //if(visited[x]==false)
        //{
        if(c[src]!=c[x])
            cc++;

        dfs(x,c,adj);
        //}

    }
}

int main()
{
    faster

    int n;
    cin>>n;

    vector <int> adj[n+1];
    //bool visited[n+1];


    int u;
    for(int i=2; i<=n; i++)
    {
        cin>>u;
        adj[u].push_back(i);
    }

    int c[n+1];

    for( int i=1; i<=n; i++)
    {
        cin>>c[i];
        //visited[i]=false;
    }



    dfs(1,c,adj);

    cout<<cc+1<<endl;


    return 0;
}

