#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

bool h[1000005];

int main()
{
    faster

    int n,m,k,x,y;

    cin>>n>>m>>k;

    while(m--)
    {
        cin>>x;
        h[x]=true;
    }

    int p=0;
    bool fall=false;

    if(h[1]==true)
        fall=true;

    while(k--)
    {
        cin>>x>>y;

        if(fall==false)
        {
            if(x==1 && p==0)
            {
                p=y;
            }
            else if(y==1 && p==0)
            {
                p=x;
            }
            else if(p==x)
            {
                p=y;
            }
            else if(p==y)
            {
                p=x;
            }

        }



        if(h[p]==true)
        {
            fall=true;
        }



    }

    if(p==0)
        p=1;

    cout<<p<<endl;






    return 0;
}
