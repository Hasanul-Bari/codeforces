#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,string> mp;
    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        string a,b;
        cin>>a>>b;
        if(a.length()<=b.length())
            mp.insert(make_pair(a,a));
        else
            mp.insert(make_pair(a,b));
    }

    //cout<<mp["contest"]<<endl;
    for(int i=0; i<n-1; i++)
    {
        string c;
        cin>>c;
        cout<<mp[c]<<" ";
    }
    string d;
    cin>>d;
    cout<<mp[d]<<endl;

    return 0;
}
