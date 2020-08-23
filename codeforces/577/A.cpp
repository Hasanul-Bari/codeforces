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

    int n,x,c=0;

    cin>>n>>x;

    for(int i=1; i*i<=x; i++)
    {
        if(x%i==0 && i<=n && x/i<=n)
        {
            c++;

            if(i!=x/i)
                c++;
        }
    }

    cout<<c<<endl;




    return 0;
}
