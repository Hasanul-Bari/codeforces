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

    int tp[9];
    tp[0]=1;

    for(int i=1; i<=8; i++)
    {
        tp[i]=tp[i-1]*2;

    }


    for(int i=1; i<=8; i++)
    {
        tp[i-1]=(tp[i]-1)*tp[i-1];
        //cout<<tp[i-1]<<endl;
    }


    int n;
    cin>>n;

    for(int i=7; i>=0; i--)
    {
        //cout<<tp[i]<<endl;
        if(n%tp[i]==0)
        {
            cout<<tp[i]<<endl;
            return 0;
        }
    }




    //return 0;
}
