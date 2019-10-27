#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int c;

void dfs(int src,vector<int> adj[],bool visited[],int ans[])
{

    visited[src]=true;

    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            c++;
            dfs(x,adj,visited,ans);
        }

    }

    ans[src]=c;

}



int main()
{
    faster

    int n,x,q;
    cin>>q;

    while(q--)
    {

        cin>>n;

        vector <int> adj[n+1];
        bool visited[n+1];
        int ans[n+1];


        for(int i=1; i<=n; i++)
        {
            cin>>x;

            if(x==i)
            {
                visited[i]=true;
                ans[i]=1;
            }

            else
            {
                adj[i].pb(x);
                visited[i]=false;
            }

        }


        for(int i=1; i<=n; i++)
        {
            c=0;
            if(visited[i]==false)
            {
                c++;
                dfs(i,adj,visited,ans);
            }
        }


        for(int i=1; i<=n; i++)
            cout<<ans[i]<<" ";
        cout<<endl;


    }

    return 0;
}
