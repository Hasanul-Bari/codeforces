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

    int n,m,x,t;
    cin>>t;

    while(t--)
    {

        cin>>n>>m;

        ll s=0;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            s=s+x;
        }

        if(n==2)
            cout<<-1<<endl;
        else
        {
            if(n==m)
            {
                cout<<2*s<<endl;

                for(int i=1; i<n; i++)
                {
                    cout<<i<<" "<<i+1<<endl;
                }
                cout<<n<<" "<<1<<endl;
            }
            else
                cout<<-1<<endl;
        }

    }




    return 0;
}
