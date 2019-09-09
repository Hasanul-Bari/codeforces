#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster


    int n,x;
    cin>>n;
    ll ans=0,z=0;
    int c=1;
    for(int i=0; i<n; i++)
    {
        cin>>x;

        if(x<=-1)
        {
            c=c*-1;


            ans=ans+(abs(x)-1);
        }
        else if(x>=1)
        {
            c=c*1;
            ans=ans+(abs(x)-1);
        }
        else if(x==0)
        {
            z++;
            ans++;

        }

    }

    if(c==-1)
    {
        if(z==0)
            ans=ans+2;

    }

    cout<<ans<<endl;



    return 0;
}
