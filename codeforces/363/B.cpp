#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,k;
    cin>>n>>k;

    int x[n],s=0,i;

    for( i=0; i<k; i++)
    {
        cin>>x[i];
        s=s+x[i];
    }
    int mn=s,j=0;

    for( ; i<n; i++)
    {
        cin>>x[i];
        s=s-x[i-k];
        s=s+x[i];
        //cout<<s<<" "<<i-k+1<<endl;
        if(s<mn)
        {
            mn=s;
            j=i-k+1;
            //cout<<mn<<" "<<j<<endl;
        }

    }

    cout<<j+1<<endl;




    return 0;
}
