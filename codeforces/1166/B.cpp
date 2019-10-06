#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int k,m,n;
    cin>>k;

    string s="aeioueauioioaueoueaiuioea";


    bool c=false;
    for(int i=1; i*i<=k; i++)
    {
        if(k%i==0 && i>=5 &&  k/i>=5)
        {
            m=i, n=k/i;
            c=true;
            break;
        }
    }

    //cout<<m<<" "<<n<<endl;

    if(c==true)
    {
        char a[m+1][n+1],l=0;

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<5; j++)
            {
                a[i][j]=s[l];
                l++;
                if(l==25)
                    l=0;
            }

        }

        for(int j=5; j<n; j++)
        {
            l=0;
            for(int i=0; i<m; i++)
            {
                a[i][j]=s[l];
                l++;
                if(l==5)
                    l=0;
            }
        }

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<a[i][j];

            }

            //cout<<endl;

        }


    }
    else
        cout<<-1<<endl;






    return 0;
}
