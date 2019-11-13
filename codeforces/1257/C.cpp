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
        int ans=n+1;

        map<int,int> m;


        for(int i=1; i<=n; i++)
        {
            cin>>x;

            if(m[x]!=0)
            {
                int z=(i-m[x])+1;

                if(ans>z)
                    ans=z;
            }

            m[x]=i;
        }

        if(ans==n+1)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }





    return 0;
}
