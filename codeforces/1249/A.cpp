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
    int q,n;
    cin>>q;

    while(q--)
    {
        int n;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        bool hp=true;

        for(int i=1; i<n; i++)
        {
            if(a[i]-a[i-1]==1)
            {
                hp=false;
                break;
            }

        }

        if(hp==false)
            cout<<2<<endl;
        else
            cout<<1<<endl;




    }




    return 0;
}
