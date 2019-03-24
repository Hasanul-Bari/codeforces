#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    ll n;
    cin>>n;

    if( (n-2)%3!=0)
        cout<<1<<" "<<1<<" "<<n-2<<endl;

    else
        cout<<1<<" "<<2<<" "<<n-3<<endl;




    return 0;
}
