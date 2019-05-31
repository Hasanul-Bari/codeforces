#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,e;
    cin>>n>>e;
    vector<int> adj[n+1];

    int u,v;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int one=0,two=0,oh=0;
    for(int i=1; i<=n; i++)
    {
        //cout<<adj[i].size()<<endl;
        int x=adj[i].size();

        if(x==1)
            one++;
        else if(x==2)
            two++;
        else if(x==n-1)
            oh++;
    }

    //cout<<one<<" "<<two<<" "<<oh<<endl;

    if(one==2 && two==n-2)
        cout<<"bus topology"<<endl;
    else if(two==n)
        cout<<"ring topology"<<endl;
    else if(oh==1 && one==n-1)
        cout<<"star topology"<<endl;
    else
        cout<<"unknown topology"<<endl;



    return 0;
}
