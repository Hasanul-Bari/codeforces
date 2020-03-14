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

    int n,k;
    cin>>n>>k;

    ll a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    ll nn=n/2;
    ll x=n-nn;

    ll b[x],c[x];
    b[0]=a[nn];
    c[0]=0;

    for(int i=1; i<x; i++)
    {
        b[i]=b[i-1]+a[nn+i];
        c[i]=(a[nn+i]*(i+1))-b[i];

        //cout<<b[i]<<" "<<c[i]<<endl;

    }


    ll mx=a[nn];


    for(int i=x-1; i>=0; i--)
    {
        if(k>=c[i])
        {
            ll rm=k-c[i];

            ll z=rm/(i+1);

           // cout<<"z = "<<z<<endl;
            //cout<<a[nn+i]<<endl;
           // cout<<a[nn+i]+z<<endl;

            z=z+a[nn+i];

            if(nn+i+1<n)
                z=min(a[nn+i+1],z);

            //cout<<"z = ** "<<z<<endl;


            if(mx<z)
                mx=z;

        }
    }

    cout<<mx<<endl;





    return 0;
}
