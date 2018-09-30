#include<iostream>
#include<map>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map <string,string> ma;
    for(int i=0; i<n; i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        s2=s2+";";

        ma.insert(make_pair(s2,s1));

    }

    for(int i=0; i<m; i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        cout<<s1<<" "<<s2<<" #"<<ma[s2]<<endl;
    }
    return 0;
}
