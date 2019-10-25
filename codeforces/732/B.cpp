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
    int n,k,s=0;

    cin>>n>>k;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(i!=0)
        {
            int x=a[i]+a[i-1];
            if(x<k)
            {
                a[i]=a[i]+(k-x);
                s=s+(k-x);
                //cout<<s<<endl;
            }
        }
    }

    cout<<s<<endl;
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;


    return 0;
}
