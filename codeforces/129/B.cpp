#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster
    int n,m;
    cin>>n>>m;

    int a[n+1],x,y;

    vector <int> adj[n+1];

    for(int i=1; i<=n; i++)
        a[i]=0;


    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        a[x]++;
        a[y]++;

        adj[x].push_back(y);
        adj[y].push_back(x);

    }

    bool hp=true;
    int c=0;


    vector<int> v;
    while(hp==true)
    {
        hp=false;
        for(int i=1; i<=n; i++)
        {
            if(a[i]==1)
            {
                v.push_back(i);
                hp=true;
            }
        }

        if(hp==true)
        {
            c++;
            for(int k=0; k<v.size(); k++)
            {
                a[v[k]]--;

                for(int j=0; j<adj[v[k]].size(); j++)
                {
                    int u=adj[v[k]][j];
                    if(u>0)
                        a[u]--;
                }
            }
        }
        v.clear();

        //cout<<c<<" =c"<<endl;

        /*for(int i=1; i<=n; i++)
            cout<<a[i]<<"  ";
        cout<<endl;*/
    }

    cout<<c<<endl;



    return 0;
}
