#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int n,x,ans=0;
    cin>>n;
    int a[5]={0};
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a[x]++;

    }


    ans=ans+a[4];
    ans=ans+a[3];


    if(a[3]>=a[1])
        a[1]=0;
    else
        a[1]=a[1]-a[3];

    ans=ans+(a[2]/2);
    a[2]=a[2]%2;

    //cout<<a[2]<<endl;

    if(a[2]!=0)
    {
        ans++;
        if(a[1]<=2)
            a[1]=0;
        else
            a[1]=a[1]-2;
    }

    if(a[1]!=0)
    {
        ans=ans+(a[1]/4);
        if(a[1]%4!=0)
            ans++;
    }

    cout<<ans<<endl;



    return 0;
}



