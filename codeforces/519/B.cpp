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

    int n,x;
    cin>>n;

    ll s=0,s1=0,s2=0;


    for(int i=0; i<n; i++)
    {
        cin>>x;
        s=s+x;
    }

    for(int i=0; i<n-1; i++)
    {
        cin>>x;
        s1=s1+x;
    }

    s=s-s1;

    for(int i=0; i<n-2; i++)
    {
        cin>>x;
        s2=s2+x;
    }

    s1=s1-s2;

    cout<<s<<endl<<s1<<endl;


    return 0;
}
