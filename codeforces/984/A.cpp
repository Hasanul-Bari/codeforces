#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    list<int> a;
    list<int> :: iterator it;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }

    a.sort();

    for(int i=0; i<n-1; i++)
    {
        if(i%2==0)
            a.pop_back();
        if(i%2!=0)
            a.pop_front();

    }
    for(it=a.begin(); it!=a.end(); it++)
        cout<<*it<<endl;
    return 0;


}
