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

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    bool f=true;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==1)
        {
            if(i+1<n && a[i+1]>=1)
                a[i+1]--;
            else
            {
                f=false;
                break;
            }
        }
    }

    cout<<( f==true ? "YES" : "NO")<<endl;




    return 0;
}


