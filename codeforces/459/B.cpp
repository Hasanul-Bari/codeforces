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
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    int i=0,j=1;
    ll c=1,c2=1;

    while(j<n && a[i]==a[j])
    {
        i++,j++;
        c++;
    }

    i=n-1,j=n-2;

    while(j>=0 && a[i]==a[j])
    {
        i--;
        j--;
        c2++;
    }

    //cout<<c<<" "<<c2<<endl;

    if(a[0]==a[n-1])
        cout<<0<<" "<<(c*(c-1))/2<<endl;
    else
        cout<<a[n-1]-a[0]<<" "<<c*c2<<endl;




    return 0;
}
