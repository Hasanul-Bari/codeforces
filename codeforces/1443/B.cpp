#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll a,b;
    string s;

    cin>>a>>b>>s;

    ll o=0,z=0,ans=0;

    vector<ll> v;

    for(auto c : s)
    {
        if(c=='1')
        {
            if(z!=0)
            {
                v.pb(z);
                z=0;
            }

            o++;
        }
        else
        {
            if(o!=0)
            {
                v.pb(o);
                o=0;
                ans=ans+a;
            }

            z++;
        }
    }

    if(z!=0)
    {
        v.pb(z);
    }

    if(o!=0)
    {
        v.pb(o);
        ans=ans+a;
    }


    int i;
    if(s[0]=='1')
        i=1;
    else
        i=2;


    //cout<<ans<<endl;

    for( ; i<v.size(); i=i+2)
    {
        if(i!=v.size()-1)
        {
            if(v[i]*b<a)
            {
                ans=ans-a;
                ans=ans+(v[i]*b);
            }
        }

    }

    cout<<ans<<endl;

}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

