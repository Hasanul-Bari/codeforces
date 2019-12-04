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

    ll n,k;

    cin>>n>>k;

    if(k>n+n-1 || k==1 || k==2)
        cout<<0<<endl;
    else if(k<=n)
    {
        cout<<(k-1)/2<<endl;
    }
    else
    {
        ll x=k-n;
        cout<<(n-x+1)/2<<endl;
    }




    return 0;
}
