#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int x=0;

    while(x>=0)
    {

        x=s.find("WUB");
        if(x>=0)
        {
            s.erase(x,3);
            s.insert(x," ");
        }

        //cout<<x<<endl;
        //cout<<s<<endl;
    }

    int i=0;
    while(isspace(s[i]))
    {
        s.erase(i,1);
    }


    i=s.length()-1;

    while(isspace(s[i]))
    {
        s.erase(i,1);
    }

    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i]==' ' && s[i]==s[i+1])
            s.erase(i,1);
    }

    cout<<s<<endl;

    return 0;

}
