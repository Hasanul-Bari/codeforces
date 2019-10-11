#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;



int main()
{
    faster
    int n,m;
    cin>>n>>m;

    bool mark[n+1];

    for(int i=1; i<=n; i++)
        mark[i]=false;

    int a,b;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        mark[a]=true;
        mark[b]=true;

    }
    int mid;
    for(int i=1; i<=n; i++)
    {
        if(mark[i]==false)
        {
            mid=i;
            break;
        }

    }


    cout<<n-1<<endl;

    for(int i=1; i<=n ;i++)
    {
        if(i!=mid)
            cout<<i<<" "<<mid<<endl;

    }





    return 0;
}
