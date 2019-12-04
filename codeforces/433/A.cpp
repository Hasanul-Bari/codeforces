#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


bool subsum(int a[],int n,int s)
{
    bool t[n+1][s+1];

    for(int i=0; i<=n; i++)
        t[i][0]=true;

    for(int i=1; i<=s; i++)
        t[0][i]=false;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=s; j++)
        {
            if(j<a[i-1])
                t[i][j]=t[i-1][j];
            else
                t[i][j]=t[i-1][j] || t[i-1][j-a[i-1]];
        }
    }


    /*for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=s; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }*/


    return t[n][s];


}



int main()
{
    faster

    int n,s=0;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    s=s/2;

    //cout<<subsum(a,n,s)<<endl;

    if(subsum(a,n,s)==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;





    return 0;
}

