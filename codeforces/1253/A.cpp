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
    int n,t,x;

    cin>>t;
    while(t--)
    {
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        bool hp=true;

        int tmp,ins=0;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(i==0)
            {
                tmp=x-a[i];
                if(tmp<0)
                    hp=false;

                if(tmp>0)
                    ins=1;
            }
            else
            {
                if(hp==true)
                {
                    int z=x-a[i];

                    if(z<0)
                        hp=false;
                    else if(z>0)
                    {
                        if(ins==0)
                            ins=1;
                        else if(ins==1)
                        {
                            if(z!=tmp)
                                hp=false;
                        }
                        else if(ins==2)
                            hp=false;
                    }
                    else if(z==0)
                    {
                        if(ins==1)
                            ins=2;
                    }



                    tmp=z;

                }
            }


        }

        //cout<<ins<<" ** "<<hp<<endl;

        if(hp==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
