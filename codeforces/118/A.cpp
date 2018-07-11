#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str,a;

    cin>>str;

    int len=str.length();

    for(int i=0; i<len; i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y' &&
           str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='Y')
           {
               a=a+str[i];
           }
    }

    for(int i=0; i<a.length(); i++)
    {
        if(isupper(a[i]))
            a[i]=tolower(a[i]);
    }

    string s;
    s='.';
    for(int i=0; i<a.length(); i=i+2)
    {
        a.insert(i,s);
    }
    cout<<a<<endl;

    return 0;
}
