#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    string s;
    cin>>s;

    int x=s.length();
    bool all=true;
    for(int i=1; i<x; i++)
    {
        if(s[i]=='1')
        {
            all=false;
        }
    }



    x--;
    //cout<<x<<endl;

    int ans=(x/2)+1;
    if(all==true &&  x%2==0)
        ans--;

    cout<<ans<<endl;




    return 0;
}
