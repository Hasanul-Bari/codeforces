#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class dataa
{
public:
    ll a,b;
};

bool cmp(dataa x,dataa y)
{
    return x.b<y.b;
}

int main()
{
    faster

    ll n,r,avg;

    cin>>n>>r>>avg;

    ll s=0;

    dataa d[n];

    for(int i=0; i<n; i++)
    {
        cin>>d[i].a>>d[i].b;

        s=s+d[i].a;
    }

    ll tr=n*avg,ans=0;

    if(s>=tr)
    {
        cout<<0<<endl;
        return 0;
    }

    ll req=tr-s;

    sort(d,d+n,cmp);



    for(int i=0; i<n; i++)
    {
        ll avl=min(req,r-d[i].a);

        ans=ans+(avl*d[i].b);

        req=req-avl;

        if(req==0)
            break;

    }

    cout<<ans<<endl;






    return 0;
}
