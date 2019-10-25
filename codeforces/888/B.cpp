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

    int a[4],n;
    string s;
    cin>>n>>s;

    for(int i=0; i<4; i++)
        a[i]=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='U')
            a[0]++;
        else if(s[i]=='D')
            a[1]++;
        else if(s[i]=='L')
            a[2]++;
        else if(s[i]=='R')
            a[3]++;
    }

    cout<<(min(a[0],a[1])*2)+(min(a[2],a[3])*2)<<endl;





    return 0;
}
