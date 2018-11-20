#include<iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;

    int se=0, f=0;


    for(int i=1; i<s.length(); i++)
    {
        if(s[i]=='S' && s[i-1]=='F')
            se++;
        else if(s[i]=='F' && s[i-1]=='S')
            f++;
    }

    if(f>se)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
