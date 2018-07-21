#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
        for(int j=i+1; j<s.length(); j++ )
            if(s[i]==s[j])
            {
                s.erase(j,1);
                j--;
            }

    if(s.length()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;

}
