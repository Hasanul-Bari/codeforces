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
 
    int t,n;
    cin>>t;
 
    while(t--)
    {
        cin>>n;
 
        int a[n],b[n],ma=INT_MAX,mb=INT_MAX;
 
 
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
 
            ma=min(ma,a[i]);
        }
 
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
 
            mb=min(mb,b[i]);
        }
 
        //cout<<ma<<" *** "<<mb<<endl;
 
 
        ll s=0;
        for(int i=0; i<n; i++)
        {
            s=s+max(a[i]-ma,b[i]-mb);
        }
 
        cout<<s<<endl;
    }
 
 
 
 
    return 0;
}