#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
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
    ll x;
    if(k==0)
        x=a[0]-1;
    else if(k==n)
        x=a[n-1];
    else if(a[k-1]<a[k])
        x=a[k-1];
    else
        x=-1;

    if(x<1 || x>1000000000)
        x=-1;



    cout<<x<<endl;


    return 0;
}
