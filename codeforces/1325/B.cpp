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
    int t,n,x;
    cin>>t;

    while(t--)
    {
        cin>>n;

        set<int> s;

        while(n--)
        {
            cin>>x;
            s.insert(x);
        }

        cout<<s.size()<<endl;

    }






    return 0;
}

