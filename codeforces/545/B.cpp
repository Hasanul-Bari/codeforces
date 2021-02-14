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

    string s,t,p;
    cin>>s>>t;


    int j=-1,n=s.length(),c=0;


    for(int i=0; i<n; i++)
    {
        if(s[i]!=t[i])
        {
            p.pb('*');
            c++;
        }
        else
            p.pb(s[i]);
    }

    if(c%2!=0)
        cout<<"impossible"<<endl;
    else
    {
        bool f=true;
        for(int i=0; i<n; i++)
        {
            if(p[i]=='*')
            {
                if(f==true)
                {
                    p[i]=s[i];
                    f=false;
                }
                else if(f==false)
                {
                    p[i]=t[i];
                    f=true;
                }

            }

        }

        cout<<p<<endl;

    }

    return 0;
}
