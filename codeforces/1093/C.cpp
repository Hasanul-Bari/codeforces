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

    int n;
    cin>>n;

    ll b[n/2];
    ll a[n];

    for(int i=0; i<(n/2); i++)
    {
        cin>>b[i];

        if(i==0)
        {
            a[i]=0;
            a[n-i-1]=b[i];
        }
        else
        {
            int l=i, r=n-i-1;

            ll p=a[r+1]+a[l-1];

            if(b[i]>=p)
            {
                a[l]=a[l-1]+(b[i]-p);
                a[r]=a[r+1];
            }
            else
            {
                a[l]=a[l-1];
                a[r]=a[r+1]-(p-b[i]);
            }


        }

    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;





    return 0;
}
