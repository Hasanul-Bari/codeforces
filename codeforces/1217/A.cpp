#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int t,s,i,e;
    cin>>t;
    while(t--)
    {
        cin>>s>>i>>e;
        int x=s+e;
        if(x>i)
        {
            x=((x-i)/2)+((x-i)%2);
            //cout<<"x= "<<x<<endl;
            cout<<min(x,e+1)<<endl;
        }
        else
            cout<<0<<endl;
    }




    return 0;
}
