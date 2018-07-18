#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)=='H' || s.at(i)=='Q' || s.at(i)=='9')
            c=1;
    }

    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}
