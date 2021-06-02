#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,m,x;
    cin>>n;

    map<int,int > mm;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        mm[x]++;
    }

    cin>>m;
    int a[m];

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    sort(a,a+m);

    int c=0;

    for(int i=0; i<m; i++)
    {
        if(mm[a[i]-1]>0)
        {
            mm[a[i]-1]--;
            c++;
        }
        else if(mm[a[i]]>0)
        {
            mm[a[i]]--;
            c++;
        }
        else if(mm[a[i]+1]>0)
        {
            mm[a[i]+1]--;
            c++;
        }
    }

    cout<<c<<endl;


}


int main()
{
    faster

    int t;
    //cin>>t;

    solve(1);
    //for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}


