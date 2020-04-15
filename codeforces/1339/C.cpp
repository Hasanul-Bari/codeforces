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

        ll x,tmp,mx,diff=-1;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(i==0)
            {
                mx=x;
            }
            else
            {
                if(mx>=x)
                {
                    diff=max(diff,mx-x);
                }
                else
                    mx=x;
            }
        }

        //cout<<diff<<endl;

        if(diff==-1 || diff==0)
        {
            cout<<0<<endl;
        }
        else
        {
            ll s=1,ss=0,c=0;
            for(int i=1; i<=32; i++)
            {
                ss=ss+s;

                //cout<<ss<<endl;

                if(diff>ss)
                {
                    c++;
                }
                else
                    break;

                s=s*2;


            }

            cout<<c+1<<endl;
        }


    }




    return 0;
}
