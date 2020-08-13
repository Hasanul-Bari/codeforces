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

    int n,l,r,x;
    cin>>n>>l>>r>>x;

    int a[n],mn,mx,s;

    for(int i=0; i<n; i++)
        cin>>a[i];

    //cout<<(1<<n)<<endl;

    int ans=0;


    for(int i=0; i<(1<<n); i++)
    {
        //cout<<bitset<32>(i)<<" -> "<<__builtin_popcount(i)<<endl;

        if(__builtin_popcount(i)>=2)
        {
            int num=i,j=0;

            mn=INT_MAX,mx=0,s=0;

            while(num)
            {
                //cout<<bitset<32>(num)<<endl;

                if(num&1)
                {
                    s=s+a[j];
                    mn=min(mn,a[j]);
                    mx=max(mx,a[j]);
                }

                j++;
                num=num>>1;

                if(s>r)
                    break;
            }

            if(s>=l && s<=r && mx-mn>=x)
                ans++;


        }



    }

    cout<<ans<<endl;




    return 0;
}

