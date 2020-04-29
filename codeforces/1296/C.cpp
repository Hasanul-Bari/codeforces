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

    int n,t,x,y;
    string s;

    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        x=0,y=0;

        map< pair<int,int>,int> m;

        int mn=INT_MAX,l,r;

        bool hp=false;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='L')
                x--;
            else if(s[i]=='R')
                x++;
            else if(s[i]=='U')
                y++;
            else if(s[i]=='D')
                y--;

            if(x==0 && y==0 && hp==false)
            {
                int z=i+1;

                if(mn>z)
                {
                    mn=z;
                    l=1,r=i+1;
                }

                m[ {x,y}]=i+1;
                hp=true;
            }
            else if(m[ {x,y}]==0)
                m[ {x,y}]=i+1;
            else
            {
                int p=m[ {x,y}];
                int q=i+1;

                int z=q-p;

                if(mn>z)
                {
                    l=p+1,r=q;
                    mn=z;
                }

                m[ {x,y}]=i+1;


            }
        }

        //cout<<x<<" ** "<<y<<" "<<mn<<endl;

        if(mn==INT_MAX)
            cout<<-1<<endl;
        else
            cout<<l<<" "<<r<<endl;



    }




    return 0;
}
