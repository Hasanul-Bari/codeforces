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

    ll a,b,n,s,q;

    cin>>q;

    while(q--)
    {
        cin>>a>>b>>n>>s;


        ll r=s/n;

        ll z=min(r,a);

        //cout<<z<<endl;
        
        s=s-(z*n);

        if(s<=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }





    return 0;
}
