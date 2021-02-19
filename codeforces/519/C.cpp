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

    int n,m;

    cin>>n>>m;

    int mn=(m+n)/3;

    mn=min(min(m,n),mn);

    cout<<mn<<endl;




    return 0;
}
