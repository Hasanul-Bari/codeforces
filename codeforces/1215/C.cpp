#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;

    vector<int> va,vb;

    for(int i=0; i<n; i++)
    {
        if(s[i]!=t[i])
        {
            if(s[i]=='a' && t[i]=='b')
                va.push_back(i+1);
            else if(s[i]=='b' && t[i]=='a')
                vb.push_back(i+1);
        }
    }

    //cout<<va.size()<<" "<<vb.size()<<endl;

    int x=va.size();
    int y=vb.size();

    if(x%2==0 && y%2==0)
    {
        cout<<(x+y)/2<<endl;

        for(int i=0; i<x-1; i=i+2)
            cout<<va[i]<<" "<<va[i+1]<<endl;

        for(int i=0; i<y-1; i=i+2)
            cout<<vb[i]<<" "<<vb[i+1]<<endl;

    }
    else if(x%2!=0 && y%2!=0)
    {
        cout<<(((x-1)+(y-1))/2)+2<<endl;

        cout<<va[0]<<" "<<va[0]<<endl;
        cout<<va[0]<<" "<<vb[0]<<endl;

        for(int i=1; i<x-1; i=i+2)
            cout<<va[i]<<" "<<va[i+1]<<endl;

        for(int i=1; i<y-1; i=i+2)
            cout<<vb[i]<<" "<<vb[i+1]<<endl;
    }
    else
        cout<<-1<<endl;




    return 0;
}
