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

    map<int,int> m;

    while(n--)
    {

        cin>>x;
        m[x]++;
    }
    int c=0;
    for(auto it : m)
    {
        c+=it.second/2;
    }

    cout<<c/2<<endl;




    return 0;
}
