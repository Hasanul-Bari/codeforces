#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,t;
    cin>>n>>t;
    vector<int> adj[n+1];

    int x;
    for(int i=1; i<n; i++)
    {
        cin>>x;
        adj[i].push_back(x+i);
    }

    int src=1;
    queue<int> q;
    q.push(src);

    while(q.empty()!=1)
    {
        int x=q.front();
        if(x==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(x==n)
            break;

        q.pop();
        int y=adj[x][0];


        q.push(y);
    }
    cout<<"NO"<<endl;


    return 0;
}
