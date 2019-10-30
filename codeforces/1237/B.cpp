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

    int n,x;
    cin>>n;

    int a[n+1];
    bool hp[n+1];



    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        hp[i]=false;

    }


    int c=0;
    for(int i=1,j=1; i<=n; i++)
    {
        cin>>x;


        while(hp[a[j]]==true)
        {
            j++;
        }

        hp[x]=true;

        if(a[j]==x)
        {
            j++;
        }
        else
            c++;



        //cout<<c<<" "<<x<<" "<<j<<endl;
    }

    cout<<c<<endl;



    return 0;
}
