#include<iostream>
using namespace std;

int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    char x;
    string s1;
    cin>>x>>s1;

    if(x=='R')
    {
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]=='q'  || s1[i]=='a'   || s1[i]=='z');

            else
            for(int j=0; j<s.length(); j++)
            {
                if(s1[i]==s[j])
                s1[i]=s[j-1];
            }
        }

    cout<<s1<<endl;
    }

    else
    {
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]=='p'  || s1[i]==';'   || s1[i]=='/');

            else
            for(int j=0; j<s.length(); j++)
            {
                if(s1[i]==s[j])
                {
                    s1[i]=s[j+1];
                    break;
                }
            }
        }

        cout<<s1<<endl;
    }

    return 0;


}
