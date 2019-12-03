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

    int t;
    cin>>t;

    int a[3];

    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];

        a[0]=a[0]*2,a[1]=a[1]*2,a[2]=a[2]*2;

        sort(a,a+3);

        int r=a[2]-a[1],ans;

        if(r>=a[0])
        {
            a[2]=a[2]-a[0];
            ans=a[0];
        }
        else
        {
            a[2]=a[2]-r;
            ans=r;
        }

        a[0]=a[0]-r;

        //cout<<ans<<endl;

        if(a[0]>0)
        {
            ans=ans+a[0];
            a[0]=a[0]/2;

            a[2]=a[2]-a[0];
            a[1]=a[1]-a[0];
        }

        //cout<<ans<<endl;

        if(a[1]>0 && a[2]>0)
            ans=ans+min(a[1],a[2]);


        cout<<ans/2<<endl;

    }




    return 0;
}
