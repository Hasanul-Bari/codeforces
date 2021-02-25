#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster


    int n,x,y;
    cin>>n;

    map<int,int> m,m2,mx;

    for(int i=1; i<=n; i++)
    {
        cin>>x>>y;



        if(y==0)
        {
            y=-1;
        }
        else if(x==0)
        {
            x=-1;
        }

        m[x]=y;

        m2[x]++;
        m2[y]++;

        mx[x]++;


    }

    int f;
    for(auto p : m2)
    {
        if(p.second==1 && p.first>0 && mx[p.first]>0)
            f=p.first;
    }

    //cout<<f<<endl;

    vector<int> v1,v2;

    x=f;
    while(x>0)
    {
        v1.pb(x);
        x=m[x];

    }


    x=-1;

    while(m[x]>0)
    {
        v2.pb(m[x]);
        x=m[x];

    }


    for(int i=0,j=0,k=0; i<n; i++)
    {
        if(i%2==0)
        {
            cout<<v1[j]<<" ";
            j++;

        }
        else
        {
            cout<<v2[k]<<" ";
            k++;
        }

    }

    cout<<endl;








    return 0;
}
