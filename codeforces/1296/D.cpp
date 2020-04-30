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

    ll n,a,b,k,x;

    cin>>n>>a>>b>>k;

    ll z=a+b;

    vector<int> v;

    for(int i=0; i<n; i++)
    {
        cin>>x;

        ll r=x%z;
        if(r==0)
            r=z;

        //cout<<r<<endl;

        if(r>a)
        {
            r=r-a;
            //cout<<r<<" **"<<endl;

            ll m=r/a;

            if(r%a!=0)
                m++;

            //cout<<m<<" m"<<endl;

            v.pb(m);
        }
    }

    sort(v.begin(),v.end());
    ll c=0;
    for(int i=0; i<v.size(); i++)
    {
        if(k-v[i]>=0)
        {
            c++;
            k=k-v[i];
        }
    }

    cout<<c+n-v.size()<<endl;




    return 0;
}
