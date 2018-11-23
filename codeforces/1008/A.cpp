#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int c=0;
    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i]!='a' && s[i]!='o' && s[i]!='u' && s[i]!='i' && s[i]!='e' && s[i]!='n')
        {
            if(s[i+1]!='a' && s[i+1]!='o' && s[i+1]!='u' && s[i+1]!='i' && s[i+1]!='e')
            {
                c=1;
            }
        }
    }
    if(s[s.length()-1]!='a' && s[s.length()-1]!='o' && s[s.length()-1]!='u' && s[s.length()-1]!='i' && s[s.length()-1]!='e' && s[s.length()-1]!='n')
    {
        c=1;
    }

    if(c==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
