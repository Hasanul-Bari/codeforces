#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

bool vis[100009];


int main()
{
    faster

    int t,n,k,x;
    cin>>t;

    while(t--)
    {
        cin>>n;


        int free=-1,freek=-1;

        for(int i=1; i<=n; i++)
        {
            cin>>k;

            bool c=false;

            for(int j=1; j<=k; j++)
            {
                cin>>x;
                if(vis[x]==false && c==false)
                {
                    vis[x]=true;
                    c=true;
                }
            }

            if(c==false)
                free=i;


        }



        for(int i=1; i<=n; i++)
        {
            if(vis[i]==false)
                freek=i;

            vis[i]=false;
        }


        //cout<<free<<" "<<freek<<endl;
        if(free!=-1 && freek!=-1)
        {
            cout<<"IMPROVE"<<endl;
            cout<<free<<" "<<freek<<endl;
        }
        else
            cout<<"OPTIMAL"<<endl;
    }




    return 0;
}
