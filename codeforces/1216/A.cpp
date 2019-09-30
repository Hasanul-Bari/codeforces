#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    string s;
    cin>>n>>s;
    int c=0;

    for(int i=0; i<n-1; i=i+2)
    {
        if(s[i]==s[i+1])
        {
            c++;
            if(s[i]=='a')
                s[i]='b';
            else
                s[i]='a';
        }
    }

    cout<<c<<endl<<s<<endl;






    return 0;
}
