#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int q;
    cin>>q;

    string s1,s2;

    map<string,string> m1;
    map<string,string> m2;

    //cout<<m2["hp"]<<endl;

    while(q--)
    {
        cin>>s1>>s2;

        if(m2[s1]=="")
        {
            m1[s1]=s2;

            m2[s2]=s1;
        }
        else
        {
            m1[m2[s1]]=s2;
            m2[s2]=m2[s1];

        }


    }

    cout<<m1.size()<<endl;

    map<string,string> :: iterator it;

    for(it=m1.begin(); it!=m1.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }




    return 0;
}
