#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int a[26];

int main()
{
    string s;
    string c="abcdefghijklmnopqrstuvwxyz";
    getline(cin,s);

    int hp=0;

    for(int i=0; i<s.length(); i++)
    {
        if(isalpha(s[i]))
        {
            //cout<<s[i]<<endl;
            for(int j=0; j<c.length(); j++)
            {
                if(s[i]==c[j] && a[j]==0)
                {
                    a[j]=1;
                    break;

                }

            }
        }
    }


    for(int i=0; i<26; i++)
    {
       if(a[i]==1)
        hp++;
    }
    cout<<hp<<endl;
    return 0;
}
