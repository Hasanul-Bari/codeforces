#include<bits/stdc++.h>

using namespace std;

int main()
{
    string g,h,p;
    cin>>g>>h>>p;


    if( p.length()!= (g.length()+h.length()) )
    {
        cout<<"NO"<<endl;
        return 0;
    }
    string s=g+h;
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());



    if(s==p)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
