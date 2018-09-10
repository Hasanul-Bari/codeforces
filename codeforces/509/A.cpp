#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n+1][n+1];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==1 || j==1)
                a[i][j]=1;

            else
                a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }

    int ma=a[1][1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j]>ma)
                ma=a[i][j];
        }
    }

    cout<<ma<<endl;
}
