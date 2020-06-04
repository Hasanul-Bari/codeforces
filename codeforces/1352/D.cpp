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

        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        ll ta=a[0],tb=0,aa=0,bb=0,c=1;

        bool hp=false;


        aa=aa+ta;

        for(int j=n-1, i=0; i<j; )
        {
            if(hp==false)
            {
                tb=tb+a[j];
                bb=bb+a[j];


                if(tb>ta)
                    hp=true,ta=0,c++,i++;
                else
                    j--;

                //cout<<j<<" "<<tb<<endl;
            }
            else if(hp==true)
            {
                ta=ta+a[i];
                aa=aa+a[i];



                if(ta>tb)
                    hp=false,tb=0,c++,j--;
                else
                    i++;

                //cout<<i<<" "<<ta<<endl;
            }

            //cout<<i<<" ** "<<j<<" "<<ta<<" "<<tb<<" "<<c<<endl;
        }

        if(ta!=0 && tb!=0)
            c++;

        cout<<c<<" "<<aa<<" "<<bb<<endl;






    }




    return 0;
}
