#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

class a
{
public:
    int v;
    int s;
};

bool comparator(a a1,a a2)
{
    return a1.v>a2.v;
}




int main()
{
    faster

    int n,x;
    cin>>n;

    a aa[n];

    for(int i=0; i<n; i++)
    {
        cin>>x;
        aa[i].v=x;
        aa[i].s=i+1;
    }

    sort(aa,aa+n,comparator);

    int ans=1;


    for(int i=1; i<n; i++)
    {
        ans=ans+(aa[i].v*i)+1;
    }



    cout<<ans<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<aa[i].s<<" ";
    }

    cout<<endl;








    return 0;
}
