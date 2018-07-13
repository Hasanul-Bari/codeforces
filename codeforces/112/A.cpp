#include<iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;

    for(int i=0; i<s1.length();  i++)
    {
        if(isupper(s1.at(i)))
           s1.at(i)=tolower(s1.at(i));
    }

    for(int i=0; i<s2.length();  i++)
    {
        if(isupper(s2.at(i)))
           s2.at(i)=tolower(s2.at(i));
    }

    int x=s1.compare(s2);

    cout<<x<<endl;
    return 0;
}
