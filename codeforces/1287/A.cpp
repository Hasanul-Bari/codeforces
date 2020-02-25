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

    int t;
    cin>>t;

    int n;
    string s;

    while(t--)
    {
        cin>>n>>s;

        int c=-1,mx=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A')
            {
                c=0;
            }
            else
            {
                if(c!=-1)
                    c++;

                if(mx<c)
                    mx=c;
            }

            //cout<<i<<" *** "<<c<<endl;
        }

        cout<<mx<<endl;
    }




    return 0;
}
