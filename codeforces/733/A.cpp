#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int p=0,cmax=0,c,hp=0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='\n' )
        {
            c=(i+1)-p;
            p=i+1;

            if(cmax<c)
                cmax=c;

            hp=1;

        }
    }
    c=s.length()+1-p;
    if(cmax<c)
        cmax=c;
    //cout<<c<<endl;

    if(hp==1)
        cout<<cmax<<endl;
    else
        cout<<s.length()+1<<endl;
    return 0;
}
