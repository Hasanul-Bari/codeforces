#include<bits/stdc++.h>
using namespace std;

map<int,int> m;

bool compare(int a,int b)
{
    if(m[a]<m[b])
        return true;
    else
        return false;
}

int main()
{

    int n,u,v;
    scanf("%d",&n);
    if(n==1)
    {
        scanf("%d",&u);
        printf("Yes\n");
        return 0;
    }

    vector <int> adj[n+1];

    for(int i=1; i<n; i++)
    {
        scanf("%d%d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);

    }


    int x,vv[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&vv[i]);
        m[vv[i]]=i;
    }

    for(int i=1; i<=n; i++)
    {
        sort(adj[i].begin(), adj[i].end(), compare);
    }


    /*for(int i=1; i<=n; i++)
    {
        cout<<i<<" -> ";
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }*/



    int src=1,i=1,c=0;

    bool visited[n+1]= {false};

    queue <int> q;

    visited[src]=true;


    q.push(src);

    while(q.empty()!=1)
    {
        int x=q.front();
        if(x!=vv[i])
        {
            c=1;
            break;
        }
        i++;
        //cout<<x<<" * "<<endl;
        q.pop();
        for(int i=0; i<adj[x].size(); i++)
        {
            int y=adj[x][i];
            if(visited[y]==false)
            {
                visited[y]=true;
                //cout<<" y "<<y<<endl;
                q.push(y);
            }
        }
    }

    if(c==1)
        printf("No\n");
    else
        printf("Yes\n");


    return 0;


}