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

    int n,x;
    cin>>n;

    priority_queue<int> qe;
    priority_queue<int, vector<int>, greater<int> > qi;

    map<int,int> m;


    for(int i=0; i<n; i++)
    {
        cin>>x;
        qi.push(x);
        m[x]=i+1;
    }

    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            x=qi.top();
            qi.pop();
            qe.push(x);
            cout<<m[x]<<" ";
        }
        else
        {
            x=qe.top();
            qe.pop();
            cout<<m[x]<<" ";
        }
    }

    cout<<endl;



    return 0;
}
