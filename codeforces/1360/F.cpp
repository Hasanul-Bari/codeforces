#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int t,n,m;



int main()
{
    faster



    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        string s[n];

        for(int i=0; i<n; i++)
            cin>>s[i];

        string f=s[0],ans="-1";

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<26; j++)
            {
                f[i]++;

                if(f[i]=='{')
                    f[i]='a';

                //cout<<f<<endl;

                int c=1;
                for(int k=1; k<n; k++)
                {
                    int cc=0;
                    for(int l=0; l<m; l++ )
                    {
                        if(f[l]!=s[k][l])
                            cc++;
                    }

                    if(cc<=1)
                        c++;
                }

                //cout<<c<<endl;



                if(c==n)
                    ans=f;


                if(ans!="-1")
                    break;

            }
            //cout<<endl;

            if(ans!="-1")
                break;
        }

        cout<<ans<<endl;
    }




    return 0;
}
