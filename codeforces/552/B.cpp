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

#define nl printf("\n");


using namespace std;


int main()
{
    ll n;
    sfll1(n);

    ll x=n,ans=0,y;
    int c=0;
    while(x>0)
    {
        c++;
        x=x/10;
    }
    //pf1(c); nl;

    int i=1;
    x=9;
    y=9;
    while(c>1)
    {
        ans=ans+(i*x);
        //pfll1(x); nl;
        x=x*10;
        y=y+x;
        c--;
        i++;
    }
    x=y/10;
    //pfll1(n-x); nl;
    //cout<<"y "<<y<<endl;
    ans=ans+(i*(n-x));

    pfll1(ans); nl;


	return 0;
}
