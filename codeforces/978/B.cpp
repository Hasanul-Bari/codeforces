#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin>>n>>s;
    int x=s.length(),c=0,ans=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]=='x')
        {
            c++;
            if(c==3)
            {
                c--;
                ans++;
            }
        }
        else
            c=0;
    }
    cout<<ans<<endl;
    return 0;
}

