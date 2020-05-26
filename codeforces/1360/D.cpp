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


    ll t,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        ll mx=0;


        for(ll i=1; i*i<=n; i++)
        {
            if(i*i==n)
            {

                //cout<<i<<" X "<<i<<endl;
                if(i<=k)
                    mx=max(mx,i);
            }
            else if(n%i==0)
            {
                //cout<<i<<" X "<<n/i<<endl;

                if(i<=k)
                    mx=max(mx,i);

                if((n/i)<=k)
                    mx=max(mx,n/i);
            }

        }

        cout<<n/mx<<endl;
    }




    return 0;
}
