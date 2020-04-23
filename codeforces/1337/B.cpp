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
    cin>>t;

    while(t--)
    {
        int x,n,m;


        cin>>x>>n>>m;

        if(m*10>=x)
        {
            cout<<"YES"<<endl;
        }
        else
        {

            ll ab=x,st=x,mm=m;
            for(int i=0,j=2; i<n; i++)
            {

                ab=(ab/2)+10;

                if(m>0)
                {
                    st=(st/2);
                    m--;
                }

            }

            if(m>0)
                st=st-(m*10);

            ab=ab-(mm*10);

            //cout<<ab<<" ** "<<st<<endl;

            if(ab<=0 || st<=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
    }

    return 0;
}
