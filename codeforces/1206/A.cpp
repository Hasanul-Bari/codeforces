#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,m;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    cin>>m;

    int b[m];

    for(int i=0; i<m; i++)
        cin>>b[i];

    sort(b,b+m);

    cout<<a[n-1]<<" "<<b[m-1]<<endl;






    return 0;
}
