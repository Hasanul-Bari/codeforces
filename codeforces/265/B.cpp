#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n,x,s=0;
    cin>>n;
    int temp=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        s=s+abs(x-temp);
        temp=x;
    }

    s=s+n+n-1;

    cout<<s<<endl;




    return 0;
}
