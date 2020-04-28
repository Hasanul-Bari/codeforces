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

    int m,n;
    cin>>n>>m;

    string s[n];

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    int a[m],l;
    bool hp=true;

    for(int i=0; i<m; i++)
    {
        cin>>a[i];

        if(i==0)
            l=s[a[i]-1].length();
        else if(l!=s[a[i]-1].length())
            hp=false;

    }

    if(hp==false)
        cout<<"No"<<endl;
    else
    {
        //cout<<l<<endl;

        int c=0;

        vector<char> v;


        for(int i=0; i<l; i++)
        {
            hp=true;
            char cc;
            for(int j=0; j<m; j++)
            {
                //cout<<s[a[j]-1][i]<<" ";
                if(j==0)
                    cc=s[a[j]-1][i];
                else if(cc!=s[a[j]-1][i])
                    hp=false;

            }
            //cout<<endl;

            if(hp==true)
                v.pb(cc);
            else
                v.pb('?');

        }


        /*for(int i=0; i<l; i++)
        {
            cout<<v[i];
        }*/

        for(int i=0,j=0; i<n; i++)
        {
            if(i==a[j]-1)
                j++;
            else if(s[i].length()==l)
            {
                hp=false;
                for(int k=0; k<l; k++)
                {
                    if(v[k]!='?' && v[k]!=s[i][k] )
                    {
                        hp=true;
                    }
                }

                if(hp==false)
                {
                    cout<<"No"<<endl;
                    return 0;
                }

            }


        }
        cout<<"Yes"<<endl;
        for(int i=0; i<l; i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }









    return 0;
}
