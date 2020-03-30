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

    vector<int> v;

    v.pb(1);

    for(int i=1,n=1; n<=2000000000; i++)
    {
        n=n+i;
        //cout<<i<<" "<<n<<endl;
        v.pb(n);
    }

    int t,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;


        int x=lower_bound(v.begin(),v.end(),k)-v.begin();



        if(v[x]!=k)
            x--;

        //cout<<x<<" ** "<<v[x]<<endl;

        int i=n-(x+1),j=n-(k-v[x]);

        //cout<<i<<" ++ "<<j<<endl;

        for(int k=1; k<=n; k++)
        {
            if(k==i || k==j)
                cout<<'b';
            else
                cout<<'a';
        }
        cout<<endl;
    }




    return 0;
}
