#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


vector <int> adj[202];
bool visited[202];

int c;




void dfs(int src)
{

    visited[src]=true;
    c++;

    //cout<<src<<" ** ";
    for(int i=0; i<adj[src].size(); i++)
    {
        int x=adj[src][i];
        //cout<<"x"<<endl;
        if(visited[x]==false)
        {
            dfs(x);
        }

    }


}

int main()
{
    faster

    int n,m;
    cin>>n>>m;

    int b,g,x;
    cin>>b;


    vector<int> v;

    while(b--)
    {
        cin>>x;
        v.pb(x);
    }
    cin>>g;

    while(g--)
    {
        cin>>x;
        v.pb(n+x);
    }

    for(int i=0,j=0,k=0; k<n*m; i++,j++,k++)
    {
        if(j==m)
            j=0;
        if(i==n)
            i=0;

        //cout<<i<<" ** "<<n+j<<endl;

        adj[i].pb(n+j);
        adj[n+j].pb(i);
    }

    for(int i=0; i<v.size(); i++)
    {
        //cout<<v[i]<<endl;
        if(visited[v[i]]==false)
        {
            dfs(v[i]);
        }

    }


    //cout<<c<<endl;

    if(c==n+m)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;


    /*for(int i=0; i<n+m; i++)
        cout<<i<<" -> "<<visited[i]<<endl;*/









    return 0;
}
