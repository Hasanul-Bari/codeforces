#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int t,n,x;
    cin>>t;

    while(t--)
    {

        cin>>n>>x;
        bool hp=false,hpp=false;
        int min;

        int d[n],h[n],maxd;
        for(int i=0; i<n; i++)
        {
            cin>>d[i]>>h[i];
            if(i==0)
                maxd=d[i];
            else if(maxd<d[i])
                maxd=d[i];

        }
        //cout<<maxd<<" ***"<<endl;

        if(maxd>=x)
        {
            hp=true;

        }
        else
        {
            for(int i=0; i<n; i++)
            {

                if(hpp==false)
                {
                    if(d[i]-h[i]>=1)
                    {
                        hpp=true;
                        min=(x-maxd)/(d[i]-h[i]);
                        if((x-maxd)%(d[i]-h[i])!=0)
                            min++;
                        min++;
                    }
                }
                else if(hpp==true)
                {
                    if(d[i]-h[i]>=1)
                    {

                        int temp=(x-maxd)/(d[i]-h[i]);
                        if((x-maxd)%(d[i]-h[i])!=0)
                            temp++;
                        temp++;

                        if(temp<min)
                            min=temp;
                    }
                }


            }
        }



        //cout<<hp<<" ** "<<hpp<<endl;

        if(hp==true)
            cout<<1<<endl;
        else if(hpp==true)
            cout<<min<<endl;
        else
            cout<<-1<<endl;

    }




    return 0;
}
