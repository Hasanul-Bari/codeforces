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
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int c=0,l=-1,r=-1;

    for(int i=0; i<n-1; i++)
    {


        if(a[i]>a[i+1] && c==0)
        {
            //cout<<a[i]<<endl;
            c++;
            l=i;
        }
        else if(c==1 && a[i]<a[i+1])
        {
            //cout<<a[i]<<endl;
            c++;
            r=i;
        }
        else if(c==2 && a[i]>a[i+1])
        {
            c++;
        }


    }

    //cout<<l<<" "<<r<<endl;

    if(c==3)
        cout<<"no"<<endl;
    else if(l==-1 && r==-1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else if(r==-1)
    {
        bool f1=false;

        if(l-1>=0 && a[l-1]<=a[n-1])
            f1=true;
        else if(l-1<0)
            f1=true;

        if(f1==true)
        {
            cout<<"yes"<<endl;
            cout<<l+1<<" "<<n<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }

    }
    else
    {
        bool f1=false,f2=false;

        if(l-1>=0 && a[l-1]<=a[r])
            f1=true;
        else if(l-1<0)
            f1=true;


        if(r+1<n && a[r+1]>=a[l])
            f2=true;
        else if(r+1==n)
            f2=true;

        if(f1==true && f2==true)
        {
            cout<<"yes"<<endl;
            cout<<l+1<<" "<<r+1<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }

    }




    return 0;
}
