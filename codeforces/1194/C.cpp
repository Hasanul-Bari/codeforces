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

    string s,t,p;
    int q;

    cin>>q;

    int a[26];

    while(q--)
    {
        cin>>s>>t>>p;




        for(int i=0; i<26; i++)
            a[i]=0;

        for(int i=0; i<p.length(); i++)
        {
            a[p[i]-97]++;
        }

        if(s==t)
        {
            cout<<"YES"<<endl;
        }
        else if(s.length()<t.length())
        {

            bool hp=true;

            int j=0;

            for(int i=0; i<t.length(); i++)
            {
                if(s[j]==t[i])
                {
                    j++;
                }
                else if(a[t[i]-97]>0)
                    a[t[i]-97]--;
                else
                {
                    hp=false;
                    break;
                }
            }
            //cout<<j<<endl;
            if(hp==true && j==s.length())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
        else
            cout<<"NO"<<endl;




    }




    return 0;
}
