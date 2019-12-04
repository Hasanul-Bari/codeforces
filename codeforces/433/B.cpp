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

    int a[n],a2[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        a2[i]=a[i];
    }

    sort(a2,a2+n);

    ll cum[n],cum2[n];

    cum[0]=a[0],cum2[0]=a2[0];

    for(int i=1; i<n; i++)
    {
        cum[i]=cum[i-1]+a[i];
        cum2[i]=cum2[i-1]+a2[i];
    }



    int type,l,r,q;
    cin>>q;

    while(q--)
    {
        cin>>type>>l>>r;

        if(type==1)
        {
            if(l==1)
                cout<<cum[r-1]<<endl;
            else
                cout<<cum[r-1]-cum[l-2]<<endl;
        }
        else
        {
            if(l==1)
                cout<<cum2[r-1]<<endl;
            else
                cout<<cum2[r-1]-cum2[l-2]<<endl;
        }


    }






    return 0;
}
