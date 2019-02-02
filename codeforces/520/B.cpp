#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector <int> adj[10001];

    for(int i=1; i<=10000; i++)
    {

        adj[i].push_back(i-1);
        if(i*2<=10000)
            adj[i].push_back(i*2);

    }

    /*for(int i=1; i<=1000; i++)
    {
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }*/

    int src,des;
    cin>>src>>des;

    bool visited[10001]={false};
    int level[10001];
    queue <int> q;

    visited[src]=true;
    level[src]=0;

    q.push(src);

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
                level[y]=level[x]+1;
                q.push(y);
            }
        }
    }

    cout<<level[des]<<endl;

    return 0;


}


