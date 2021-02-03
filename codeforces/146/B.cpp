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

    int a,b;
    cin>>a>>b;

    a++;
    string bb=to_string(b);
    while(1)
    {
        string s=to_string(a);

        string x="";
        for(char c : s)
        {
            if(c=='4' || c=='7')
                x.push_back(c);

        }

        if(x==bb)
        {
            cout<<s<<endl;
            return 0;
        }
        a++;

    }







    return 0;
}

