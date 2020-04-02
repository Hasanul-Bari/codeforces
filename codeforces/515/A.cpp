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
    ll a,b,s;

    cin>>a>>b>>s;

    ll x=abs(a)+abs(b);

    //cout<<x<<endl;

    if(x<=s && (s-x)%2==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;




    return 0;
}
