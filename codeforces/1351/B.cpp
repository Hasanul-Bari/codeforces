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

    int t,a,b,a1,b1;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>a1>>b1;


        if(a==a1 && b+b1==a)
            cout<<"Yes"<<endl;
        else if(a==b1 && b+a1==a)
            cout<<"Yes"<<endl;
        else if(b==a1 && a+b1==b)
            cout<<"Yes"<<endl;
        else if(b==b1 && a+a1==b)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }




    return 0;
}
