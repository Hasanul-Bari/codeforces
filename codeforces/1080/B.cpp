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

    int q,l,r;
    cin>>q;

    while(q--)
    {
        cin>>l>>r;

        int x=r-l+1;

        if(x%2==0)
        {
            if(l%2==0)
                cout<<-(x/2)<<endl;
            else
                cout<<x/2<<endl;
        }
        else
        {
            if(l%2==0)
                cout<<r-(x/2)<<endl;
            else
                cout<<(x/2)-r<<endl;
        }
    }






    return 0;
}
