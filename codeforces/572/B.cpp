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

    int n,k;
    cin>>n>>k;

    map<int,int, greater<int> > b,s;
    map<int,int> :: iterator it;

    char c;
    int p,q;

    for(int i=0; i<n; i++)
    {
        cin>>c>>p>>q;
        if(c=='B')
        {
            b[p]=b[p]+q;
        }
        else
        {
            s[p]=s[p]+q;
        }
    }


    int h=s.size(),i=0;

    for(it=s.begin(); it!=s.end(); it++)
    {

        i++;
        if(h-k<i)
        {
            cout<<"S"<<" "<<it->first<<" "<<it->second<<endl;
        }

    }

    i=0;

    for(it=b.begin(); it!=b.end(); it++)
    {
        cout<<"B"<<" "<<it->first<<" "<<it->second<<endl;
        i++;
        if(i==k)
            break;
    }











    return 0;
}
