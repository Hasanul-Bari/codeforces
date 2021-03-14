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

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[26];

        for(int i=0; i<26; i++)
            a[i]=0;

        string s;

        for(int i=0; i<n; i++)
        {
            cin>>s;

            for(int j=0; j<s.length(); j++)
            {
                a[s[j]-'a']++;
            }
        }

        bool f=true;
        for(int i=0; i<26; i++)
        {
            if(a[i]%n!=0)
            {


                f=false;
                break;
            }

        }

        if(f==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }




    return 0;
}

