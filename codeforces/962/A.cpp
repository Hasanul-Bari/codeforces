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

    ll s=0,ss=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }

    int ans;
    for(int i=0; i<n; i++)
    {

        ss=ss+a[i];

        if(ss*2>=s)
        {
            ans=i+1;
            break;
        }
    }

    cout<<ans<<endl;




    return 0;
}
