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

    map<int,int> m,last;
    map<int,int> :: iterator it;

    int n,x;
    cin>>n;

    int c=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;

        if(m[x]==0)
        {
            if(last[x]!=0)
                m[x]=i+1-last[x];
            else
                c++;
        }
        else if(m[x]!=-1)
        {
            if(i+1-last[x]!=m[x])
                m[x]=-1,c--;
        }

        last[x]=i+1;

    }

    cout<<c<<endl;

    for(it=m.begin(); it!=m.end(); it++)
    {
        if(it->second!=-1)
           cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;





    return 0;
}
