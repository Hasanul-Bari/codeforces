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

    int t,n,x,y,d;

    cin>>t;

    while(t--)
    {
        cin>>n>>d;



        for(int i=0; i<n; i++)
        {
            cin>>y;

            if(i==0)
                x=y;
            else
            {
                int z=min(y,d/i);

                d=d-(z*i);

                x=x+z;
            }


        }

        cout<<x<<endl;


    }




    return 0;
}
