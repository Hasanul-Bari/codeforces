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

    map<string,int> m;
    map<string,int > :: iterator it2;


    vector<string> v1,v3;
    vector<int> v2;

    int n;
    cin>>n;

    string na;
    int sc;
    for(int i=0; i<n; i++)
    {
        cin>>na>>sc;

        v1.pb(na);


        m[na]=m[na]+sc;

        v2.pb(m[na]);

        //cout<<v1[i]<<" ** "<<v2[i]<<endl;

    }
    int mx=INT_MIN;


    for(it2=m.begin(); it2!=m.end(); it2++)
    {
        //cout<<it2->first<<" "<<it2->second<<endl;

        if(mx< it2->second)
            mx=it2->second;
    }

    for(it2=m.begin(); it2!=m.end(); it2++)
    {

        if(it2->second==mx)
            v3.pb(it2->first);
    }
    //cout<<mx<<endl;

    int t=n,ans;
    for(int i=0; i<v3.size(); i++)
    {
        //cout<<v3[i]<<endl;

        for(int j=n-1; j>=0; j--)
        {
            if(v3[i]==v1[j] && mx<=v2[j])
            {
                if(t>j)
                    t=j,ans=i;


            }
        }
        //cout<<t<<endl;
    }

    cout<<v3[ans]<<endl;


    return 0;
}
