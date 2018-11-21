#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <string,string> m;
    map <string,string> :: iterator it;

    m["purple"]="Power";
    m["green"]="Time";
    m["blue"]="Space";
    m["orange"]="Soul";
    m["red"]="Reality";
    m["yellow"]="Mind";

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        it=m.find(s);
        m.erase(it);
    }

    cout<<6-n<<endl;

    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->second<<endl;
    }

    return 0;

}
