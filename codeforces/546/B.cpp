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
        cin>>a[i];

    sort(a,a+n);

    int c=0;
    for(int i=0; i<n; i++)
    {


        if(i!=0)
        {
            if(a[i-1]>=a[i])
            {
                c=c+(a[i-1]-a[i])+1;
                a[i]=a[i-1]+1;
            }
        }


    }

    cout<<c<<endl;





    return 0;
}
