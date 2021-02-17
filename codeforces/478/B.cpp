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

    ll n,m;

    cin>>n>>m;

    ll mx=n-(m-1);
    mx=mx*(mx-1);
    mx=mx/2;

    //cout<<mx<<endl;


    ll x=n/m;
    ll r=n%m;

    ll r2=m-r;

    ll mn1=(x*(x-1))/2;
    x++;
    ll mn2=(x*(x-1))/2;

    mn2=mn2*r;
    mn1=mn1*r2;

    cout<<mn1+mn2<<" "<<mx<<endl;







    return 0;
}
