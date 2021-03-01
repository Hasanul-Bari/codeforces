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


    ll n;

    cin>>n;


    bool f=false;

    for(ll i=0; i<=n/1234567; i++)
    {
        for(ll j=0; j<=(n-1234567*i)/123456; j++)
        {
            if((n-i*1234567-j*123456)%1234==0)
            {
                f=true;
                break;

            }
        }

        if(f==true)
            break;
    }




    //cout<<f<<endl;


    cout<<(f ? "YES" : "NO")<<endl;






    return 0;
}
