#include<bits/stdc++.h>
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,s=0,x;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>x;
        s=s+x;
        a[i]=s;

    }

    sort(a,a+n);
    int m,q,j;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>q;
        j=lower_bound(a,a+n,q)-a;
        cout<<j+1<<endl;
    }


    return 0;
}
