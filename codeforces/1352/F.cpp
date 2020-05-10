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

    int t,n0,n1,n2,k=1;

    cin>>t;

    while(t--)
    {
        cin>>n0>>n1>>n2;

        if(n0==0)
        {
            if(n1==0)
            {
                for(int i=0; i<=n2; i++)
                    cout<<1;
            }
            else if(n2==0)
            {
                for(int i=0; i<=n1; i++)
                {
                    if(i%2==0)
                        cout<<1;
                    else
                        cout<<0;
                }
            }
            else
            {
                cout<<0;

                for(int i=0; i<=n2; i++)
                {
                    cout<<1;
                }
                for(int i=0; i<n1-1; i++)
                {
                    if(i%2==0)
                        cout<<0;
                    else
                        cout<<1;
                }

            }
        }
        else
        {
            if(n1==0)
            {
                for(int i=0; i<=n0; i++)
                    cout<<0;
            }
            else if(n2==0)
            {
                for(int i=0; i<=n0; i++)
                    cout<<0;

                for(int i=0; i<n1; i++)
                {
                    if(i%2==0)
                        cout<<1;
                    else
                        cout<<0;
                }
            }
            else
            {
                for(int i=0; i<=n0; i++)
                    cout<<0;

                bool hp=false;
                if(n1%2==0)
                    n1--,hp=true;

                for(int i=0; i<n1; i++)
                {
                    if(i%2==0)
                        cout<<1;
                    else
                        cout<<0;
                }

                for(int i=0; i<n2; i++)
                    cout<<1;

                if(hp==true)
                    cout<<0;
            }


        }


        cout<<endl;


    }




    return 0;
}
