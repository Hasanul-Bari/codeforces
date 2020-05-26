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

    ll t,a,b;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        if(a<b)
            swap(a,b);


        int x=max(a,2*b);

        cout<<x*x<<endl;;


    }




    return 0;
}
