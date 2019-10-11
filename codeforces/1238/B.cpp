#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int q,n,r;
    cin>>q;

    while(q--)
    {
        cin>>n>>r;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        int m=0,c=0;

        for(int i=n-1; i>=0; i--)
        {

            //cout<<a[i]-m<<endl;
            if(a[i]-m>0)
            {
                if(i==n-1)
                {
                    c++;
                    m=m+r;
                }
                else if(i!=n-1 && a[i]!=a[i+1])
                {
                    c++;
                    m=m+r;
                }

            }
            else
                break;

            //cout<<c<<" =c "<<a[i]<<endl;

        }

        cout<<c<<endl;

    }




    return 0;
}
