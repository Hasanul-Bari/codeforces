#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    vector<int>a;
    map<int,int> m;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=v.size()-1; i>=0; i--)
    {
        if(m[v[i]]==0)
        {
            a.push_back(v[i]);
            m[v[i]]=1;
        }
    }

    cout<<a.size()<<endl;
    for(int i=a.size()-1; i>0; i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[0]<<endl;

    return 0;
}
