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
 
    int t,n,x,a,b;
 
    cin>>t;
 
    while(t--)
    {
        cin>>n>>x>>a>>b;;
 
        if(a>b)
            swap(a,b);
 
        int d=b-a;
        int r=a-1, l=n-b;
 
        d=d+min(x,(r+l));
 
        cout<<d<<endl;
 
 
 
    }
 
 
 
 
    return 0;
}