#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int s,n;
    cin>>s>>n;

    bool a[s+1],b[s+1];

    for(int i=1; i<=s; i++)
        cin>>a[i];

    bool c=0;
    for(int i=1; i<=s; i++)
    {
        cin>>b[i];
        if(i>n && (a[i]==1 && b[i]==1))
            c=1;
    }


    if(a[1]==1 && a[n]==1)
        cout<<"YES"<<endl;
    else if(a[1]==1 && b[n]==1 && c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;





    return 0;
}
