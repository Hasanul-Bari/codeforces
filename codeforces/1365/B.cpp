#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,b;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int pv1=0,pv2=0;

    bool f1=true,f2=true,c1=false,c2=false;

    for(int i=0; i<n; i++)
    {
        cin>>b;
        if(b==0)
        {
            c1=true;

            if(pv1==0)
            {
                pv1=a[i];
            }
            else if(pv1>a[i])
            {
                f1=false;
            }

            pv1=a[i];
        }
        else if(b==1)
        {
            c2=true;

            if(pv2==0)
            {
                pv2=a[i];
            }
            else if(pv2>a[i])
            {
                f2=false;
            }

            pv2=a[i];
        }
    }


    if(c1==true && c2==true)
        cout<<"Yes"<<endl;
    else
    {
        if(f1==true && f2==true)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }




}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}



