#include<bits/stdc++.h>
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    int q,x;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>x;
        cout<<upper_bound(a,a+n,x)-a<<endl;
    }



    return 0;
}
