#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


void seive(int n)
{
    vector<int> prime(n+5,0);


    for(int i=2; i<=n; i++)
    {

        if(prime[i]==0)
        {
            prime[i]++;
            for(int j=i+i; j<=n; j=j+i)
                prime[j]++;
        }
    }

    int c=0;
    for(int i=2; i<=n; i++)
    {
        //cout<<i<<" "<<prime[i]<<endl;

        if(prime[i]==2)
            c++;


    }

    cout<<c<<endl;
}



int main()
{
    faster

    int n;
    cin>>n;

    seive(n);


    return 0;
}
