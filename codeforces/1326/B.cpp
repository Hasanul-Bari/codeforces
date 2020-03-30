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

    int n,x,mx=0;
    cin>>n;

    while(n--)
    {
        cin>>x;

        cout<<mx+x<<" ";

        if(mx+x>mx)
            mx=mx+x;

    }
    cout<<endl;




    return 0;
}
