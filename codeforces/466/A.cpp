#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,a,b,m;

    cin>>n>>m>>a>>b;

    int x,y;

    if(m<=n)
        x=(n/m)*b+(n%m)*a;
    else
        x=b;

    if(m<=n)
    {
        y=(n/m)*b;

        if(n%m!=0)
            y=y+b;
    }

    else
        y=b;




    cout<<min(x,min(y,n*a))<<endl;

}


int main()
{
    faster

    int t;
    //cin>>t;

    solve(1);
    //for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}



