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

    int t,n,x;
    cin>>t;


    while(t--)
    {
        cin>>n;

        int a[n+1];

        int cc=0;

        vector<int> v;

        for(int i=1; i<=n; i++)
        {
            cin>>a[i];

            if(i<=(n/2))
            {
                if(i==1)
                {
                    //c++;
                    cc++;
                }
                else if(a[i]!=a[i-1])
                {
                    //c++;
                    v.pb(cc);
                    //tcc=tcc+cc;
                    cc=1;
                }
                else if(a[i]==a[i-1])
                {
                    cc++;
                }

                //cout<<a[i]<<" ** "<<c<<" ** "<<tcc<<endl;
            }
        }
        if(n!=1 && a[n/2]!=a[(n/2)+1])
        {
            v.pb(cc);
            //tcc=tcc+cc;
        }


        int z=v.size();

        //cout<<"z = "<<z<<" "<<tcc<<endl;

        if(z<3)
            cout<<"0 0 0"<<endl;
        /*else if(tcc<=5)
            cout<<"0 0 0"<<endl;*/
        else
        {
            int g=0,b=0,s=0;

            g=v[0];

            for(int i=1; i<v.size(); i++)
            {
                //cout<<v[i]<<" ** ";

                if(s<=g)
                    s=s+v[i];
                else
                    b=b+v[i];

                //cout<<g<<" "<<s<<" "<<b<<endl;

            }
            //cout<<endl;
            if(g<s && g<b)
                cout<<g<<" "<<s<<" "<<b<<endl;
            else
                cout<<"0 0 0"<<endl;
        }



    }




    return 0;
}
/*
18
45 26 26 23 23 23 22 22 22 22 16 16 16 16 16 16 16 16
*/
