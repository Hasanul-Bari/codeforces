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

    ll t,n;
    cin>>t;

    ll s;

    while(t--)
    {
        cin>>n;

        s=n;

        while(n>=10)
        {
            s=s+(n/10);

            n=(n%10)+(n/10);

            //cout<<"n "<<n<<endl;
        }

        cout<<s<<endl;
    }



    return 0;
}

