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

    int m;
    cin>>m;

    int a[6],u,v;

    for(int i=1; i<=5; i++)
        a[i]=0;

    while(m--)
    {
        cin>>u>>v;
        a[u]++;
        a[v]++;

    }

    for(int i=1; i<=5; i++)
    {
        if(a[i]!=2)
        {
            cout<<"WIN"<<endl;
            return 0;
        }
    }
    cout<<"FAIL"<<endl;






    return 0;
}
