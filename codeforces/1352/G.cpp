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

        if(n<=3)
            cout<<-1<<endl;

        else
        {
            int nn=n,n3=n/2;
            if(n%2!=0)
                nn--,n3--;
            else
                n3=n3-2;



            //cout<<n/2<<endl;
            for(int i=0; i<(n/2)-2; i++)
            {
                cout<<nn<<" ";
                nn=nn-2;
            }
            cout<<3<<" "<<1<<" "<<4<<" "<<2<<" ";

            nn=5;
            for(int i=0; i<n3; i++)
            {
                cout<<nn<<" ";
                nn=nn+2;
            }



            cout<<endl;

        }
    }




    return 0;
}
