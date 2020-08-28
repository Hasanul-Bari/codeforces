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

    int n;
    cin>>n;

    string s;
    while(n--)
    {

        cin>>s;

        a[s[0]-97]++;


    }

    int ss=0;
    for(int i=0; i<26; i++)
    {
        if(a[i]&1)
        {
            a[i]=(a[i]/2);


            ss=ss+((a[i]*(a[i]-1))/2)+((a[i]*(a[i]+1))/2);

        }
        else
        {
            a[i]=(a[i]/2);
            ss=ss+((a[i]*(a[i]-1))/2)*2;
        }
    }

    cout<<ss<<endl;











    return 0;
}
