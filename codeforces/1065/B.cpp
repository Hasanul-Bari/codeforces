#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    ll n,m;

    cin>>n>>m;

    ll mn=n-(2*m);

    ll c=0,s=0;
    for(int i=0; ; i++)
    {
        s=s+i;
        //cout<<s<<endl;
        c++;
        if(s>=m)
            break;
    }

    //cout<<c<<endl;

    if(c==1)
        c--;


    if(mn<0)
        mn=0;


    cout<<mn<<" "<<n-c<<endl;


    return 0;
}
