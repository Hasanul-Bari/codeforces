#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

map<ll,vector<ll> >adj;
map<ll,int> m;
int c;


void dfs(ll src)
{

    m[src]=2;
    c++;

    //cout<<src<<" ";
    for(int i=0; i<adj[src].size(); i++)
    {
        ll x=adj[src][i];
        //cout<<"x"<<endl;
        if(m[x]==1)
        {
            dfs(x);
        }

    }

}

void dfs2(ll src)
{

    m[src]=2;
    c++;

    cout<<src<<" ";
    for(int i=0; i<adj[src].size(); i++)
    {
        ll x=adj[src][i];
        //cout<<"x"<<endl;
        if(m[x]==1)
        {
            dfs2(x);
        }

    }

}

int main()
{
    faster

    int n;
    cin>>n;

    ll a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        m[a[i]]=1;

        adj[a[i]].pb(a[i]*2);

        if(a[i]%3==0)
            adj[a[i]].pb(a[i]/3);

    }

    //cout<<m[5]<<" ** "<<endl;


    for(int i=0; i<n; i++)
    {
        dfs(a[i]);

        //cout<<c<<" c "<<a[i]<<endl;

        if(c==n)
        {
            for(int i=0; i<n; i++)
                m[a[i]]=1;

            dfs2(a[i]);
            cout<<endl;
            break;
        }
        else
        {
            c=0;
            for(int i=0; i<n; i++)
                m[a[i]]=1;
        }




    }



    return 0;
}


