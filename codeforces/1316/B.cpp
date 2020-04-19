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
    string s;
    cin>>t;

    while(t--)
    {
        cin>>n>>s;

        string h=s,b=s;


        int k=1;
        for(int i=1; i<n; i++)
        {
            int l=0;
            for(int j=i; j<n; j++,l++)
                h[l]=s[j];


            int x=n-i;

            //cout<<x<<endl;

            if(x%2==0)
            {
                for(int j=0; j<i; j++)
                {
                    h[l]=s[j];
                    l++;
                }
            }
            else
            {
                for(int j=i-1; j>=0; j--)
                {
                    h[l]=s[j];
                    l++;
                }
            }

            //cout<<h<<endl;

            if(h<b)
            {

                b=h;
                k=i+1;
            }


        }
        cout<<b<<endl<<k<<endl;


    }




    return 0;
}
