#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,k,l,m,c=0;
    for(i=0; i<s.length(); i++ )
    {
        if(s[i]=='h')
        {
            c++;
            break;
        }
    }

    for(j=i+1; j<s.length(); j++)
    {
        if(s[j]=='e')
        {
            c++;
            break;
        }
    }

    for(k=j+1; k<s.length(); k++ )
    {
        if(s[k]=='l')
        {
            c++;
            break;
        }
    }

    for(l=k+1; l<s.length(); l++ )
    {
        if(s[l]=='l')
        {
            c++;
            break;
        }
    }

    for(m=l+1; m<s.length(); m++ )
    {
        if(s[m]=='o')
        {
            c++;
            break;
        }
    }
    if(c==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;




}
