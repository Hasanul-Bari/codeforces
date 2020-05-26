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

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n],e=0,o=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(a[i]%2==0)
                e++;
            else
                o++;
        }

        if(e%2==0 && o%2==0)
            cout<<"YES"<<endl;
        else
        {
            sort(a,a+n);
            bool hp=false;

            for(int i=1; i<n; i++)
            {
                if(a[i]==a[i-1]+1)
                {
                    hp=true;
                    break;
                }

            }

            if(hp==true)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }




    return 0;
}
