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

    ll n,m,k;

    cin>>n>>m>>k;

    ll a[n],diff[n-1];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];



        if(i!=0)
        {
            diff[i-1]=a[i]-a[i-1]-1;
        }
    }



    ll tt=a[n-1]-a[0]+1;


    sort(diff,diff+n-1,greater<int>());


    //cout<<tt<<endl;
    for(int i=0; i<k-1; i++)
    {
        tt=tt-diff[i];

        //cout<<diff[i]<<" "<<i<<endl;


    }

    cout<<tt<<endl;





    return 0;
}

