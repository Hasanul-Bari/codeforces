#include<bits/stdc++.h>
using namespace std;

map<int,int> p;


void printpath(int u,int s)
{
    if(u==s)
    {
        cout<<u<<" ";
        return ;
    }
    printpath(p[u],s);

    cout<<u<<" ";

}


int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);


    int n,e;
    cin>>n>>e;
    vector <int> adj[n+1];
    vector <int> cost[n+1];


    int u,v,w;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);

    }

    /*for(int i=1; i<=n; i++)
    {
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ("<<cost[i][j]<<")    ";
        }
        cout<<endl;
    }*/

    int src=1;

    long long d[n+1];

    for(int i=1; i<=n; i++)
        d[i]=1e18;




    d[src]=1;
    priority_queue <int> q;

    q.push(src);

    while(q.empty()!=1)
    {
        int x=q.top();
        q.pop();
        for(int i=0; i<adj[x].size(); i++)
        {
            int y=adj[x][i];
            if(d[x]+cost[x][i]<d[y])
            {
                d[y]=d[x]+cost[x][i];
                q.push(y);
                p[y]=x;
            }
        }
    }

    /*for(int i=1; i<=n; i++)
    {
        cout<<i<<" "<<d[i]<<endl;
    }*/

    if(d[n]==1e18)
        cout<<"-1"<<endl;
    else
    {
        printpath(n,src);
        cout<<endl;
    }


    return 0;



}
