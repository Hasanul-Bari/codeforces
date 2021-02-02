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

    int a[n];
    map<int,int> mm;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mm[a[i]]++;
    }


    ll s=0;
    for(int i=0; i<n; i++)
    {
        s=s+(n-mm[a[i]]);
    }

    cout<<s/2<<endl;




    return 0;
}



