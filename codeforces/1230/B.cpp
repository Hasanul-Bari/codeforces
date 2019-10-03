#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,k,x;
    string s;
    cin>>n>>k>>s;


    if(n==1 && k==1)
        cout<<0<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            x=s[i]-48;
            //cout<<x<<endl;

            if(k>0)
            {
                if(i==0)
                {
                    cout<<1;
                    if(s[i]!='1')
                        k--;
                }

                else
                {
                    cout<<0;
                    if(s[i]!='0')
                        k--;
                }
            }
            else
                cout<<x;


        }
        cout<<endl;
    }


    return 0;
}
