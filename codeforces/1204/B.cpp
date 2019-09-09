#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,l,r;
    cin>>n>>l>>r;

    ll min,max;

    min=n-(l-1);

    for(int i=1,j=2; i<=l-1; i++,j=j*2)
    {
        min=min+j;
    }

    max=1;

    int i,j;
    for( i=1,j=1; i<=r-1; i++)
    {
        j=j*2;
        max=max+j;
    }

    max=max+((n-r)*j);

    cout<<min<<" "<<max<<endl;




    return 0;
}
