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


    int n;
    cin>>n;

    bool f=false,x;

    ll c=1,s=1;

    for(int i=0; i<n; i++)
    {
        cin>>x;

        if(f==true)
        {
            if(x==0)
                c++;
            else
                s=s*c,c=1;
        }

        if(x==1)
            f=true;
    }

    if(f==false)
        s=0;

    cout<<s<<endl;




    return 0;
}
