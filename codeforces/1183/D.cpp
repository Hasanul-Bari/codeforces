#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int f[200009];

int main()
{
    faster

    int q,n,x;
    cin>>q;

    while(q--)
    {
        cin>>n;




        for(int i=0; i<n; i++)
        {
            cin>>x;
            x--;
            f[x]++;
        }

        sort(f,f+n);




        ll expected=f[n-1],ss=f[n-1];
        f[n-1]=0;

        for(int i=n-2; i>=0; i--)
        {


            if(expected>0)
            {

                if(expected<=f[i])
                {
                    ss=ss+expected-1;
                    expected--;
                }
                else
                {
                    expected=f[i];
                    ss=ss+expected;
                }

            }

            //cout<<ss<<" ** "<<f[i]<<endl;
            f[i]=0;
        }



        cout<<ss<<endl;


    }





    return 0;
}

