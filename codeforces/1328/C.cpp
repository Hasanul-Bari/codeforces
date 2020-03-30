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

    int t,n,x;
    cin>>t;
    string s;

    while(t--)
    {
        cin>>n>>s;


        int a[n],b[n],hp=0,big=0;

        for(int i=0; i<s.length(); i++)
        {

            if(i==0)
            {
                if(s[i]=='0')
                {
                    a[i]=2,b[i]=1,big=1;
                }
                else if(s[i]=='1')
                {
                    a[i]=2,b[i]=2;
                }
                else
                    a[i]=1,b[i]=1;
            }

            else
            {
                if(s[i]=='0')
                {
                    a[i]=0,b[i]=0;
                }
                else if(s[i]=='1')
                {
                    if(big==0)
                        a[i]=1,b[i]=0,big=1;
                    else
                        a[i]=0,b[i]=1;
                }
                else
                {
                    if(big==0)
                        a[i]=1,b[i]=1;
                    else
                        a[i]=0,b[i]=2;
                }


            }





        }



        for(int i=0; i<n; i++)
            cout<<a[i];
        cout<<endl;

        for(int i=0; i<n; i++)
            cout<<b[i];
        cout<<endl;


    }



    return 0;
}
