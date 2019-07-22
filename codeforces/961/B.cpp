#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,k;
    cin>>n>>k;

    int a[n],i,b[n];
    ll s=0,s1=0;

    for(int i=0; i<n; i++)
        cin>>b[i];

    for( i=0; i<k; i++)
    {
        cin>>a[i];

        if(a[i]==0)
            s1=s1+b[i];
        else
            s=s+b[i];

    }

    ll mx=s1;

    for(  ; i<n; i++)
    {
        cin>>a[i];

        if(a[i]==0)
        {
            s1=s1+b[i];
        }
        else
            s=s+b[i];

        if(a[i-k]==0)
            s1=s1-b[i-k];

        if(s1>mx)
            mx=s1;


    }
    //cout<<s<<" "<<mx<<endl;

    cout<<s+mx<<endl;




    return 0;
}
