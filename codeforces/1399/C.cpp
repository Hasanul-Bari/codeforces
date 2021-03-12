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

        map<int,int> m;


        for(int i=0; i<n; i++)
        {
            cin>>x;
            m[x]++;
        }
        int mx=0,k=0;
        for(int s=2; s<=2*n; s++)
        {
            for(auto it : m)
            {
                if(it.first != s-it.first)
                {
                    int z=min(it.second,m[s-it.first]);
                    k=k+z;
                }
                else
                {
                    int z=it.second/2;
                    k=k+(z*2);
                }

            }

            //cout<<s<<" ** "<<k<<endl;

            mx=max(mx,k/2);
            k=0;
        }

        cout<<mx<<endl;
    }




    return 0;
}
