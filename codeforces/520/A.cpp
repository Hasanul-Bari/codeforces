#include<iostream>
using namespace std;

int a[26];

int main()
{
    string s;
    int n;
    cin>>n>>s;

    string c1="abcdefghijklmnopqrstuvwxyz";
    string c2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i=0; i<s.length(); i++)
    {
        for(int j=0; j<c1.length(); j++)
        {
            if( (s[i]==c1[j]  || s[i]==c2[j]) && a[j]==0)
            {
                a[j]=1;
            }
        }
    }
    int hp=0;

    for(int i=0; i<26; i++)
    {
        if(a[i]==0)
        {
            hp=1;
            break;
        }
    }

    if(hp==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
