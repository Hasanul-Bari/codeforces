#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    //cout<<s.at(0);
    for(int i=1; i<s.length(); i=i+2)
    {
        for(int j=0; j<s.length()-i; j=j+2)
        {
            if(s[j+2]<s[j])
            swap(s[j+2],s[j]);
        }
    }


    cout<<s<<endl;
}
