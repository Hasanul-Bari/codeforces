#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int n;
    string s;
    cin>>n>>s;

    int x=0,y=0,c=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='U')
            y=y+1;
        else
            x=x+1;

        if(x==y && i!=n-1)
        {
            if(s[i]==s[i+1])
                c++;

        }
    }

    cout<<c<<endl;




    return 0;
}
