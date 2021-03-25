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

    int t,n,k;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>n>>k>>s;
        int f,l;
        bool hp=true;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='*' && hp==true)
            {
                f=i;
                hp=false;
            }

            if(s[i]=='*')
                l=i;
        }

        if(f==l)
        {
            cout<<1<<endl;
        }
        else
        {


            int c=1;


            int i,id,j,jj;
            for(i=f; i<l; )
            {

                for(j=i+1,jj=1; (jj<=k && j<=l); j++,jj++)
                {
                    if(s[j]=='*')
                        id=j;
                }


                c++;

                //cout<<id<<" id"<<endl;


                i=id;

                if(i>=l)
                    break;


            }

            if(id<l)
                c++;

            cout<<c<<endl;

        }
    }




    return 0;
}
