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
    ll x;

    cin>>n>>x;

    vector<int> v;

    while(x!=0)
    {
        int z=x%10;
        x=x/10;

        if(z==9)
        {
            v.pb(3),v.pb(3),v.pb(2),v.pb(7);
        }
        else if(z==8)
        {
            v.pb(2),v.pb(2),v.pb(2),v.pb(7);
        }
        else if(z==6)
        {
            v.pb(3),v.pb(5);
        }
        else if(z==4)
        {
            v.pb(2),v.pb(2),v.pb(3);
        }
        else if(z==1 || z==0)
        {

        }
        else
        {
            v.pb(z);
        }


    }

    sort(v.begin(),v.end());

    x=v.size();
    for(int i=x-1; i>=0; i--)
        cout<<v[i];
    cout<<endl;





    return 0;
}
