#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[3][3];

int main()
{
    faster

    int n;
    string s;
    cin>>n>>s;



    for(int i=0; i<n; i++)
    {
        if(s[i]=='R')
            a[i%3][0]++;
        else if(s[i]=='G')
            a[i%3][1]++;
        else if(s[i]=='B')
            a[i%3][2]++;
    }

    int ss;

    for(int i=0; i<3; i++)
    {
        ss=0;
        for(int j=0; j<3; j++)
        {
            ss=ss+a[i][j];
        }

        for(int j=0; j<3; j++)
        {
            a[i][j]=ss-a[i][j];
        }

    }


    /*for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/

    int ans=INT_MAX;
    string h;


    if(ans>a[0][0]+a[1][1]+a[2][2])
    {
        ans=a[0][0]+a[1][1]+a[2][2];
        h="RGB";

    }
    if(ans>a[0][0]+a[1][2]+a[2][1])
    {
        ans=a[0][0]+a[1][2]+a[2][1];
        h="RBG";
    }
    if(ans>a[0][1]+a[1][0]+a[2][2])
    {
        ans=a[0][1]+a[1][0]+a[2][2];
        h="GRB";
    }
    if(ans>a[0][1]+a[1][2]+a[2][0])
    {
        ans=a[0][1]+a[1][2]+a[2][0];
        h="GBR";
    }
    if(ans>a[0][2]+a[1][0]+a[2][1])
    {
        ans=a[0][2]+a[1][0]+a[2][1];
        h="BRG";
    }
    if(ans>a[0][2]+a[1][1]+a[2][0])
    {
        ans=a[0][2]+a[1][1]+a[2][0];
        h="BGR";
    }

    cout<<ans<<endl;

    //cout<<h<<endl;

    for(int i=0,j=0; i<n; i++,j++)
    {
        if(j==3)
            j=0;

        cout<<h[j];
    }
    cout<<endl;







    return 0;
}

