#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,m;

    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    set<int> s;

    for(int i=n-1; i>=0; i--)
    {
        s.insert(a[i]);
        a[i]=s.size();
    }

    int x;
    for(int i=0; i<m; i++)
    {
        cin>>x;
        cout<<a[x-1]<<endl;
    }




    return 0;
}
