#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n;
    ll m;
    cin>>n>>m;
    ll aa[n],s=0,a,b,ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        s=s+a;
        aa[i]=a-b;
    }

    sort(aa,aa+n);
    //cout<<s<<endl;



    if(s>m)
    {
        for(int i=n-1; i>=0; i--)
        {
            s=s-aa[i];
            ans++;
            if(s<=m)
                break;
        }
    }

    if(s<=m)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;




    return 0;
}
