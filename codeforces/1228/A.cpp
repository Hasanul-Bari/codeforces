#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int l,r;
    cin>>l>>r;

    for(int i=l; i<=r; i++)
    {
        int a[10];
        for(int j=0; j<10; j++)
            a[j]=0;

        int x=i,c=0;
        while(x!=0)
        {
            int d=x%10;
            a[d]++;

            if(a[d]>1)
                c++;
            x=x/10;
        }

        if(c==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}
