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

    int t,n,x,a,mx;

    cin>>t;

    while(t--)
    {
        cin>>n>>x;
        mx=INT_MAX;

        while(n--)
        {
            cin>>a;

            if(a>x)
                mx=min(mx,2);
            else if(x%a==0)
                mx=min(mx,x/a);
            else
                mx=min(mx,(x/a)+1);



        }
        cout<<mx<<endl;
    }




    return 0;
}
