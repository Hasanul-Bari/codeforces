#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;

    if(s.length()==1)
    {
        if(islower(s[0]))
           s[0]=toupper(s[0]);
        else
           s[0]=tolower(s[0]);
        cout<<s<<endl;
    }


    else
    {
        for(int i=0; i<s.length(); i++)
        {
            if(isupper(s[i]))
                c++;
        }

        if(c==s.length())
        {
            for(int i=0; i<s.length(); i++)
                s[i]=tolower(s[i]);
            cout<<s<<endl;
        }
        else if(islower(s[0])  &&  c==s.length()-1)
        {
            s[0]=toupper(s[0]);
            for(int i=1; i<s.length(); i++)
                s[i]=tolower(s[i]);

             cout<<s<<endl;
        }

        else
            cout<<s<<endl;


    }
    return 0;

}
