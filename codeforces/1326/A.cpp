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
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n==1)
            cout<<-1<<endl;
        else if( (((n-1)*2)+3)%3==0)
        {
            for(int i=0; i<n-2; i++)
                cout<<2;
            cout<<33<<endl;
        }
        else
        {
            for(int i=0; i<n-1; i++)
                cout<<2;
            cout<<3<<endl;
        }
    }






    return 0;
}
