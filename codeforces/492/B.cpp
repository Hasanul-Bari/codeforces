#include<bits/stdc++.h>

#define ll long long
#define ull unsignd long long

#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d%d",&x,&y)
#define sf3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sf4(x,y,z,w) scanf("%d%d%d%d",&x,&y,&z,&w)

#define sfll1(x) scanf("%lld",&x)
#define sfll2(x,y) scanf("%lld%lld",&x,&y)
#define sfll3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define sfll4(x,y,z,w) scanf("%lld%lld%lld%lld",&x,&y,&z,&w)

#define sfd1(x) scanf("%lf",&x)
#define sfd2(x,y) scanf("%lf%lf",&x,&y)
#define sfd3(x,y,z) scanf("%lf%lf%lf",&x,&y,&z)
#define sfd4(x,y,z,w) scanf("%lf%lf%lf%lf",&x,&y,&z,&w)

#define pf1(x) printf("%d",x)
#define pf2(x,y) printf("%d %d",x,y)
#define pf3(x,y,z) printf("%d %d %d",x,y,z)
#define pf4(x,y,z,w) printf("%d %d %d %d",x,y,z,w)
#define pfll1(x) printf("%lld",x)
#define pfd1(x) printf("%lf",x)

#define nl printf("\n");
#define pf printf
#define sf scanf

using namespace std;


int main()
{

    int n;
    ll l;
    sf1(n);
    sfll1(l);

    ll a[n];
    for(int i=0; i<n; i++)
        sfll1(a[i]);

    sort(a,a+n);
    ll temp=2*a[0],max=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]-a[i-1]>temp)
            temp=a[i]-a[i-1];
    }

    if(2*(l-a[n-1])>temp)
        temp=2*(l-a[n-1]);

    //cout<<temp<<endl;
    double ans=(double)(temp)/2.0;
    //pfd1(ans);
    //nl;
    pf("%.9lf",ans);
    nl;




    return 0;
}

