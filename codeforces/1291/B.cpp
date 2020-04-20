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

    int t,n,x;
    cin>>t;

    while(t--)
    {
        cin>>n;


        int a[n];

        int c=-1;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(a[i]<i && c==-1)
                c=i;
        }


        //cout<<c<<" ***"<<endl;


        int cc=-1;

        for(int i=n-1,j=0; i>=0; i--,j++)
        {

            if(a[i]<j && cc==-1)
                cc=j;
        }
        //cout<<cc<<" ***"<<endl;

        if(c==-1 || cc==-1)
            cout<<"Yes"<<endl;
        else if(c+cc>n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;






    }




    return 0;
}
