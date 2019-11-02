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
        int mn,c=0;

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=n-1; i>=0; i--)
        {

            if(i==n-1)
            {
                mn=a[i];
            }
            else
            {
                if(mn<a[i])
                    c++;
                else if(mn>a[i])
                    mn=a[i];
            }


        }

        cout<<c<<endl;
    }




    return 0;
}
