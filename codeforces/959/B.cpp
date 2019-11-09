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

    int n,k,m;

    cin>>n>>k>>m;

    map<string,int> s;
    string h;

    for(int i=1; i<=n; i++)
    {
        cin>>h;
        s[h]=i;
    }



    int a[n+1];
    for(int i=1; i<=n; i++)
        cin>>a[i];

    int x,y,pp,mn;

    map<int,int> p;


    while(k--)
    {
        cin>>x;
        for(int i=1; i<=x; i++)
        {
            cin>>y;

            if(i==1)
            {
                pp=y;
                p[y]=y;
                mn=a[y];
            }
            else
            {
                p[y]=pp;

                if(a[y]<mn)
                    mn=a[y];
            }

            if(i==x)
                a[pp]=mn;
        }
    }



    ll ss=0;
    while(m--)
    {
        cin>>h;

        ss=ss+a[p[s[h]]];

        //cout<<ss<<endl;
    }

    cout<<ss<<endl;






    return 0;
}
