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

    int n;
    cin>>n;

    string s;
    map<string,bool> m;
    map<int,string> m2;

    for(int i=n; i>0; i--)
    {
        cin>>s;
        m[s]=true;
        m2[i]=s;
    }

    for(int i=1; i<=n; i++)
    {
        if(m[m2[i]]==true)
        {
            cout<<m2[i]<<endl;
            m[m2[i]]=false;
        }
    }




    return 0;
}
