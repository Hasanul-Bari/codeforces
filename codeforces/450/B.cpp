#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{


    int a[3],n,m=1000000007;
    cin>>a[0]>>a[1]>>n;



    a[2]=a[1]-a[0];

    int p=n%6;
    if(p==0)
        p=6;

    //cout<<p<<endl;

    if(p<=3)
    {
        int x=a[p-1];

        if(x<0)
            cout<<(m+(x%m))%m<<endl;
        else
            cout<<x%m<<endl;
    }
    else
    {
        int x=-a[p-3-1];

        if(x<0)
            cout<<(m+(x%m))%m<<endl;
        else
            cout<<x%m<<endl;
    }



}


int main()
{
    faster

    int t;
    //cin>>t;
    //for(int tc=1; tc<=t; tc++)solve(tc);


    solve(1);


    return 0;
}




