#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

vector <int> adj[27];
bool visited[27];



void dfs(int src)
{

    visited[src]=true;

    //cout<<src<<" ";
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

    int n;
    cin>>n;

    string s;

    set<int> ss;
    set<int> :: iterator it;

    for(int i=0; i<n; i++)
    {
        cin>>s;

        for(int j=0; j<s.length(); j++)
        {
            int z=int(s[j]-97);

            ss.insert(z);

            if(j!=0)
            {
                int y=int(s[j-1]-97);

                adj[z].pb(y);
                adj[y].pb(z);
            }


        }

    }

    int c=0;

    for(it=ss.begin(); it!=ss.end(); it++)
    {
        int x=*it;

        if(visited[x]==false)
        {
            c++;
            dfs(x);
        }
    }


    cout<<c<<endl;

    return 0;
}
