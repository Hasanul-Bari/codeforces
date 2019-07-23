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
    int a[n],b[n-1];

    for(int i=0; i<n ;i++)
    {
         cin>>a[i];
         if(i!=0)
         {
             b[i-1]=a[i]-a[i-1];
         }
    }

    n--;

    sort(b,b+n);
    ll s=0;

    for(int i=0; i<n-(k-1); i++)
    {
        s=s+b[i];
    }

    cout<<s<<endl;



    return 0;
}
