#include<iostream>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int c=0;
    for(int i=0,j=s2.length()-1;  i<s1.length() ;i++ ,j-- )
    {
        if(s1[i]!=s2[j])
        {
            c=1;
            break;
        }
    }

    if(s1.length()==s2.length() && c==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}
