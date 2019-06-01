#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,m,k;
    cin>>n>>m>>k;
    vector<int> adj[n+1];
    vector<int> cost[n+1];

    int u,v,l;
    for(int i=0; i<m; i++)
    {
        cin>>u>>v>>l;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cost[u].push_back(l);
        cost[v].push_back(l);
    }

    int a[k];
    bool b[n+1]={false};

    for(int i=0; i<k; i++)
    {
        cin>>a[i];
        b[a[i]]=true;
    }


    int x,ans=-1,hp=0;

    for(int i=0; i<k; i++)
    {
        int x=a[i];
        for(int j=0; j<adj[x].size(); j++)
        {
            int y=adj[x][j];
            if(hp==0 && b[y]==false)
            {
                ans=cost[x][j];
                hp=1;
            }
            else if(ans>cost[x][j] && b[y]==false)
                ans=cost[x][j];
        }
    }

    cout<<ans<<endl;




    return 0;
}
