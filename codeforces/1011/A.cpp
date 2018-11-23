#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,c=0;

    string s;
    cin>>n>>k>>s;

    sort(s.begin(),s.end());

    for(int i=0; i<s.length()-1; i++)
    {
        //cout<<s[i+1]<<" "<<s[i]+1<<endl;
        while(s[i+1]==s[i]+1  || s[i+1]==s[i])
        {
            s.erase(i+1,1);
        }
    }

    for(int i=0; i<k; i++)
    {
        c=c+(s[i]-96);
        //cout<<s[i]<<" "<<s[i]-96<<endl;

    }
    //cout<<s<<" "<<c<<endl;
    if(s.length()<k)
        cout<<-1<<endl;
    else
        cout<<c<<endl;
    return 0;


}
