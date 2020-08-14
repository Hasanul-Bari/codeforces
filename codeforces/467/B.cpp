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

    int n,m,k,f;
    cin>>n>>m>>k;

    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    cin>>f;

    int c=0;
    for(int i=0; i<m; i++)
    {
        //cout<<bitset<32>(f^a[i])<<endl;

        if(__builtin_popcount(f^a[i])<=k)
        {
            c++;
        }
    }

    cout<<c<<endl;




    return 0;
}
