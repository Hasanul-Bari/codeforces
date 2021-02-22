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

    vector<int> v[5];

    for(int i=1; i<=n; i++)
    {

        cin>>x;

        v[x-1].pb(i);


    }

    int c=min(v[0].size(),min(v[1].size(),v[2].size()));


    cout<<c<<endl;

    for(int i=0; i<c; i++)
    {
        cout<<v[0][i]<<" "<<v[1][i]<<" "<<v[2][i]<<endl;
    }




    return 0;
}
