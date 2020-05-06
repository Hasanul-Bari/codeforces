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

    ll q,n,k,a,b;

    cin>>q;

    while(q--)
    {
        cin>>k>>n>>a>>b;

        ll x=n*a;

        if(x<k)
        {
            cout<<n<<endl;
        }
        else
        {
            ll r=x-k;

            ll d=a-b;

            r=(r/d)+1;

            if(n-r<0)
                cout<<-1<<endl;
            else

                cout<<n-r<<endl;
        }
    }




    return 0;
}
