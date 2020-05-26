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

    int t;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;

        int n=s.length(),c=0,ans=INT_MAX,a[3];

        map<int,int> m;

        for(int i=0; i<n; i++)
        {
            if(m[s[i]-'0'] ==0)
            {
                c++;
            }

            m[s[i]-'0']=i+1;


            if(c==3)
            {
                a[0]=m[1];
                a[1]=m[2];
                a[2]=m[3];

                sort(a,a+3);

                //cout<<a[0]<<" "<<a[1]<<" "<<a[3]<<endl;

                if(ans> (a[2]-a[0])+1)
                    ans=(a[2]-a[0])+1;
            }

        }
        if(ans==INT_MAX)
            ans=0;

        cout<<ans<<endl;
    }






    return 0;
}
