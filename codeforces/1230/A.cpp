#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];

    sort(a,a+4);

    if(a[0]+a[3]==a[2]+a[1])
        cout<<"YES"<<endl;
    else if(a[3]==a[0]+a[1]+a[2])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;





    return 0;
}
