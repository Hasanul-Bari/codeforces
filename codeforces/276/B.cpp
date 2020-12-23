#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[26];

int main()
{
    faster

    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        a[s[i]-'a']++;
    }

    int c=0;
    for(int i=0; i<26; i++)
    {
        if(a[i]%2!=0)
            c++;

    }

    if(c<=1)
    {
        cout<<"First"<<endl;
    }
    else if(c%2==0)
        cout<<"Second"<<endl;
    else
        cout<<"First"<<endl;



    return 0;
}
