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

    int n,x,cc=0,mx=0;
    cin>>n;

    char c;

    map<int,bool> m;

    for(int i=0; i<n; i++)
    {
        cin>>c>>x;

        if(c=='+')
        {
            m[x]=true;
            cc++;
        }
        else
        {
            if(m[x]==true)
            {
                m[x]=false;
                cc--;
            }
            else
            {
                mx++;
            }
        }

        //cout<<mx<<endl;

        mx=max(mx,cc);

    }

    cout<<mx<<endl;




    return 0;
}
