#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;

    int a[n],mxp,mx;


    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==0)
        {
            mx=a[i];
            mxp=i;
        }
        else if(mx<a[i])
        {
            mx=a[i];
            mxp=i;
        }
    }
    //cout<<mxp<<endl;

    int l=mxp-1,r=mxp+1,c=0;

    while(l>=0 && r<n)
    {
        if(a[l]>a[r])
        {
            if(a[l]<mx)
            {
                mx=a[l];
                l--;
            }
            else
            {
                c=1;
                break;
            }
        }

        else if(a[l]<a[r])
        {
            if(a[r]<mx)
            {
                mx=a[r];
                r++;
            }
            else
            {
                c=1;
                break;
            }
        }
        //cout<<l<<" "<<r<<endl;
    }


    while(l>=0 && c==0)
    {
        if(a[l]<mx)
        {
            mx=a[l];
            l--;
        }
        else
        {
            c=1;
            break;
        }
    }

    while(r<n && c==0)
    {
        if(a[r]<mx)
        {
            mx=a[r];
            r++;
        }
        else
        {
            c=1;
            break;
        }
    }

    //cout<<c<<endl;

    if(c==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;


    return 0;
}
