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

    int t,n,x;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n];

        for(int i=1; i<=n; i++)
        {
            cin>>x;
            a[x]=i;
        }

        int l,r;

        for(int i=1; i<=n; i++)
        {
            if(i==1)
            {
                l=r=a[i];
                cout<<1;
            }
            else
            {
                if(l>a[i])
                    l=a[i];
                else if(r<a[i])
                    r=a[i];

                int dis=r-l+1;

                if(dis==i)
                    cout<<1;
                else
                    cout<<0;
            }
        }
        cout<<endl;


    }




    return 0;
}
