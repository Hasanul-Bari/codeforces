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

    int n;
    cin>>n;

    int x,temp,c=-1;

    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(i!=1)
        {
            if(temp>x)
                c=i;
        }

        temp=x;
    }

    if(c==-1)
        c=1;

    cout<<c-1<<endl;




    return 0;
}
