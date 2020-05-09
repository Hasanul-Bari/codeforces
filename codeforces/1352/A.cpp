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
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;

        ll ss=1;

        vector<int> v;


        for(int i=0; i<s.length()-1; i++)
        {
            ss=ss*10;

        }


        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!='0')
                v.pb(ss*(s[i]-'0'));

            ss=ss/10;

        }
        cout<<v.size()<<endl;

        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";

        }
        cout<<endl;




    }




    return 0;
}
