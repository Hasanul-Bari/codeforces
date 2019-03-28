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
    int ans=a[0],s=0;

    cout<<a[0]<<endl;;

    int j=1;
    for(int i=1; i<n; i++)
    {
        if(j==k)
            break;

        if(a[i]!=a[i-1])
        {

            //s=s+a[i-1]-s;

            cout<<a[i]-a[i-1]<<endl;
            j++;
        }



    }


    for(int i=j; i<k; i++)
        cout<<0<<endl;



    return 0;
}
