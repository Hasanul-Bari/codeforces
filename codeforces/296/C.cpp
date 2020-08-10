#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void add(int l,int r,ll x,ll diff[],ll a[])
{
    if(l-1<0)
        a[0]=a[0]+x;
    else
        diff[l-1]=diff[l-1]+x;

    diff[r]=diff[r]-x;




}

int main()
{
    faster

    int n,m,k;

    cin>>n>>m>>k;

    ll a[n],dif[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(i!=0)
            dif[i-1]=a[i]-a[i-1];
    }
    dif[n-1]=-a[n-1];




    int l[m],r[m];
    ll x[m],diff[m],op[m];

    for(int i=0; i<m; i++)
    {
        cin>>l[i]>>r[i]>>x[i];
        diff[i]=0;
        op[i]=0;
    }

    int lll,rr;
    for(int i=0; i<k; i++)
    {
        cin>>lll>>rr;
        lll--,rr--;

        add(lll,rr,1,diff,op);

    }

    /*cout<<"Array"<<endl;
    for(int i=0; i<m; i++)
    {
        cout<<op[i]<<" "<<diff[i]<<endl;;
    }*/


    for(int i=0; i<m; i++)
    {
        if(i!=0)
            op[i]=diff[i-1]+op[i-1];

        //cout<<op[i]<<" ";

        add(l[i]-1,r[i]-1,x[i]*op[i],dif,a);
    }

    for(int i=0; i<n; i++)
    {
        if(i!=0)
            a[i]=dif[i-1]+a[i-1];

        cout<<a[i]<<" ";
    }
    cout<<endl;




    return 0;
}
