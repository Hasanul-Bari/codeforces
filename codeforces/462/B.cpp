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

    string s;
    cin>>s;

    map<char,ll> m;

    for(char c : s)
    {
        m[c]++;
    }

    vector<ll> v;

    for(auto it : m)
    {
        v.pb(it.second);
    }

    sort(v.begin(),v.end(), greater<>());

    ll ss=0;
    int i=0;
    while(k>0)
    {
        if(v[i]<=k)
        {
            k=k-v[i];
            ss+=v[i]*v[i];
        }
        else
        {
            ss+=k*k;
            k=0;
        }
        i++;
    }

    cout<<ss<<endl;







    return 0;
}
