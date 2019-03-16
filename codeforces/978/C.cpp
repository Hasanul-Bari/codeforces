#include<bits/stdc++.h>
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;
    ll a[n],b[n],s=0,j,k,x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        s=s+x;
        a[i]=s;

    }

    /*for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;*/


    for(int i=0; i<m; i++)
    {
        cin>>x;
        j=lower_bound(a,a+n,x)-a;
        cout<<j+1<<" ";
        if(j!=0)
        {
            cout<<x-a[j-1]<<endl;
        }
        else
            cout<<x<<endl;
    }



    return 0;
}
