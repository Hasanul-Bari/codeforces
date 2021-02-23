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

    ll n,a,b,c;
    cin>>n>>a>>b>>c;


    ll r=n%4;
    r=4-r;

    //cout<<r<<endl;

    if(r==1)
        cout<<min(a,min(b+c,3*c))<<endl;
    else if(r==2)
        cout<<min(2*a,min(b,c*2))<<endl;
    else if(r==3)
        cout<<min(3*a,min(a+b,c))<<endl;
    else
        cout<<0<<endl;




    return 0;
}
