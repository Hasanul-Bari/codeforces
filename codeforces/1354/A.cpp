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
    ll t,a,b,c,d;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>d;

        if(b>=a)
            cout<<b<<endl;
        else
        {
            if(c<=d)
                cout<<-1<<endl;
            else
            {
                ll r=a-b,g=c-d;

                ll n=r/g;

                if(r%g!=0)
                    n++;

                cout<<b+(n*c)<<endl;



            }



        }
    }




    return 0;
}
