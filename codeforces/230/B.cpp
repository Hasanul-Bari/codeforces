#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

map<ll,bool> m;

void seive()
{
    vector<bool> prime(1000000,true);

    for(ll i=2; i*i<=1000000; i++)
    {
        if(prime[i]==true)
        {
            for(ll j=i*i; j<=1000000; j=j+i)
                prime[j]=false;
        }
    }

    for(ll i=2; i<=1000000; i++)
    {
        if(prime[i]==true)
            m[i*i]=true;  //cout<<i*i<<" ";
    }
}



int main()
{
    faster

    seive();


    ll n,x;

    cin>>n;

    while(n--)
    {
        cin>>x;

        if(m[x]==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }





    return 0;
}
