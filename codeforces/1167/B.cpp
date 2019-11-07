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

    int a[6]={4,8,15,16,23,42};

    map<int,int> m1,m2;

    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            //cout<<a[i]<<" * "<<a[j]<<" = "<<a[i]*a[j]<<endl;

            int x=a[i]*a[j];

            m1[x]=a[i];
            m2[x]=a[j];
        }
    }

    int x,y,p,q,r,s;

    int b[6];



    cout<<"? "<<1<<" "<<2<<endl;
    cin>>x;

    p=m1[x];
    q=m2[x];

    cout<<"? "<<2<<" "<<3<<endl;
    cin>>y;

    r=m1[y];
    s=m2[y];

    if(p==r)
    {
        b[1]=p;
        b[0]=q;
        b[2]=s;
    }
    else if(p==s)
    {
        b[1]=p;
        b[0]=q;
        b[2]=r;
    }
    else if(q==r)
    {
        b[1]=q;
        b[0]=p;
        b[2]=s;
    }
    else if(q==s)
    {
        b[1]=q;
        b[0]=p;
        b[2]=r;
    }




    cout<<"? "<<4<<" "<<5<<endl;
    cin>>x;

    p=m1[x];
    q=m2[x];

    cout<<"? "<<5<<" "<<6<<endl;
    cin>>y;

    r=m1[y];
    s=m2[y];

    if(p==r)
    {
        b[4]=p;
        b[3]=q;
        b[5]=s;
    }
    else if(p==s)
    {
        b[4]=p;
        b[3]=q;
        b[5]=r;
    }
    else if(q==r)
    {
        b[4]=q;
        b[3]=p;
        b[5]=s;
    }
    else if(q==s)
    {
        b[4]=q;
        b[3]=p;
        b[5]=r;
    }

    cout<<"! ";
    for(int i=0; i<6; i++)
        cout<<b[i]<<" ";
    cout<<endl;






    return 0;
}
