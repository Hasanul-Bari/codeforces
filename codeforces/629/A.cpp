#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


int r[100],c[100];

int main()
{
    faster

    int n;
    cin>>n;



    char cc;
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n; j++)
        {
            cin>>cc;

            if(cc=='C')
            {
                r[i]++;
                c[j]++;
            }

        }
    }

    ll s=0;
    for(int i=0; i<n; i++)
    {
        //cout<<r[i]<<" "<<c[i]<<endl;

        s=s+(r[i]*(r[i]-1))/2;
        //cout<<s<<endl;
        s=s+(c[i]*(c[i]-1))/2;
        //cout<<s<<endl;
    }

    cout<<s<<endl;




    return 0;
}
