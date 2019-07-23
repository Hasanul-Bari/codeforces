#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);
        int k=min(a[n-1],a[n-2]);

        k=min(n-2,k-1);

        cout<<k<<endl;
    }




    return 0;
}
