#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;

    int l[n], r[n],L=0,R=0;

    for(int i=0; i<n; i++)
    {
        cin>>l[i]>>r[i];
        L=L+l[i];
        R=R+r[i];
    }

    int b=abs(L-R);


    int ans=-1;

    for(int i=0; i<n; i++)
    {
        if(abs( (L-l[i]+r[i])-(R-r[i]+l[i]))>b  )
        {
            b=abs( (L-l[i]+r[i])-(R-r[i]+l[i]));
            ans=i+1;
        }
    }

    if(ans==-1)
        cout<<0<<endl;
    else
        cout<<ans<<endl;



    return 0;
}
