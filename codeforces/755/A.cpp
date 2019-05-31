#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int nn;
    cin>>nn;
    int n=(nn*1000)+5;


    vector<bool> prime(n,true);


    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=n; j=j+i)
                prime[j]=false;
        }
    }

    /*for(int i=2; i<=n; i++)
    {
        if(prime[i]==true)
            cout<<i<<",";
    }*/

    for(int i=1; i<=1000; i++)
    {
        if(prime[(i*nn)+1]==false)
        {
            cout<<i<<endl;
            return 0;
        }
    }

}
