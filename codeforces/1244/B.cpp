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

    int n,t;
    cin>>t;

    while(t--)
    {


        string s;
        cin>>n>>s;

        int x=s.length(),f1,l1;
        bool hp=false;

        for(int i=0; i<x; i++)
        {
            if(s[i]=='1')
            {
                if(hp==false)
                {
                    hp=true;
                    f1=i+1;
                }

                l1=i+1;
            }
        }

        if(hp==false)
            cout<<n<<endl;
        else
        {
            l1=l1*2;
            f1=((n-f1)+1)*2;
            cout<<max(l1,f1)<<endl;
        }

    }




    return 0;
}
