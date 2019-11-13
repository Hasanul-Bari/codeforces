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
    ll x,y;
 
    cin>>t;
 
    while(t--)
    {
        cin>>x>>y;
 
        if(x>=y)
            cout<<"YES"<<endl;
        else if(x==1)
            cout<<"NO"<<endl;
        else if(x<=3 && y>3)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
 
    }
 
 
 
 
    return 0;
}