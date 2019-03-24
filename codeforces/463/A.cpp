#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n,s;
    cin>>n>>s;

    int x,y,max=-1;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if(y==0)
        {
            y=100;
            if( (x<=s) && (max<(100-y)))
            {
                max=100-y;
            }
        }
        else
        {
            if( (x<s) && (max<(100-y)))
            {
                max=100-y;
            }
        }
    }

    cout<<max<<endl;




    return 0;
}
