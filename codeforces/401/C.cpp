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

    int n,m;

    cin>>n>>m;


    int a[n];

    if(m<n-1 || (n*2)+2<m)
    {
        cout<<-1<<endl;
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        a[i]=1;
    }


    for(int i=0; i<n; i++)
    {
        if(m==0)
            break;

        a[i]++;
        m--;
    }

    for(int i=0; i<n; i++)
    {
        if(m==0)
            break;

        a[i]++;
        m--;
    }

    if(m==2)
        cout<<"11";
    else if(m==1)
        cout<<"1";


    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
            cout<<"0";
        else if(a[i]==2)
            cout<<"01";
        else if(a[i]==3)
            cout<<"011";
    }

    cout<<endl;


    return 0;
}
