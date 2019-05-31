#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,x;
    cin>>n;

    vector<int> adj[n+1];

    for(int i=1; i<=n; i++)
    {
        cin>>x;
        adj[i].push_back(x);
    }

    for(int src=1; src<=n; src++)
    {

        bool visited[n+1]= {false};

        queue<int> q;
        visited[src]=true;
        q.push(src);
        int c=0;
        while(q.empty()!=1)
        {
            int x=q.front();
            q.pop();
            for(int i=0; i<adj[x].size(); i++)
            {
                int y=adj[x][i];
                if(visited[y]==false)
                {
                    visited[y]=true;
                    q.push(y);
                }
                else
                {
                    cout<<y<<" ";
                    c=1;
                    break;
                }
            }
            if(c==1)
                break;

        }

    }
    cout<<endl;

    return 0;
}
