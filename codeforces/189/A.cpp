#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int target;

    int coin[3];
    cin>>target;
    for(int i=0; i<3; i++)
        cin>>coin[i];

    sort(coin,coin+3);



    int a[target+1],hp=0,max;
    a[0]=0;

    for(int i=1; i<=target; i++)
    {
        a[i]=target+1;
        hp=0;
        for(int j=0; j<3; j++)
        {
            if(i>=coin[j]  &&  target>= a[i-coin[j]]+1  )
            {
                a[i]=a[i-coin[j]]+1;
                if(hp==0)
                {
                    max=a[i];
                    hp=1;
                }
                else if(max<a[i])
                {
                    max=a[i];

                }


            }

        }
        if(hp==1)
        {
            a[i]=max;
        }

        //cout<<a[i]<<"  "<<i<<endl;

    }


    cout<<max<<endl;

    //cout<<a[target]<<" "<<max<<endl;

    return 0;
}


