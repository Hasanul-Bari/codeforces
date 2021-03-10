#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class delivary
{
public:
    ll a,b;
};

bool cmp(delivary x, delivary y)
{
    if(x.a==y.a)
        return y.b<x.b;
    else
        return y.a<x.a;
}

int main()
{
    faster

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        delivary d[n];

        for(int i=0; i<n; i++)
            cin>>d[i].a;

        for(int i=0; i<n; i++)
            cin>>d[i].b;

        sort(d,d+n,cmp);

        ll s=0;

        for(int i=0; i<n; i++)
        {
            //cout<<d[i].a<<" ** "<<d[i].b<<endl;

            if(s+d[i].b<=d[i].a)
            {
                s=s+d[i].b;
            }
            else
            {
                s=max(d[i].a,s);
                break;
            }
        }

        cout<<s<<endl;

    }






    return 0;
}
