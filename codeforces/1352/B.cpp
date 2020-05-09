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

    ll t,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        if(n%2==0)
        {
            if(k%2!=0)
            {
                if((n-((k-1)*2))>0)
                {
                    cout<<"YES"<<endl;
                    for(int i=0; i<k-1; i++)
                    {
                        cout<<2<<" ";
                    }
                    cout<<n-((k-1)*2)<<endl;
                }
                else
                    cout<<"NO"<<endl;

            }

            else
            {
                if(k>n)
                    cout<<"NO"<<endl;
                else
                {
                    cout<<"YES"<<endl;
                    for(int i=0; i<k-1; i++)
                    {
                        cout<<1<<" ";
                    }
                    cout<<n-(k-1)<<endl;
                }
            }
        }
        else
        {
            if(k%2==0)
                cout<<"NO"<<endl;
            else
            {
                if(k>n)
                    cout<<"NO"<<endl;
                else
                {
                    cout<<"YES"<<endl;
                    for(int i=0; i<k-1; i++)
                    {
                        cout<<1<<" ";
                    }
                    cout<<n-(k-1)<<endl;
                }
            }
        }
    }






    return 0;
}

