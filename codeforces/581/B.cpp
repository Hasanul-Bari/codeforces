#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int max=a[n-1];
    a[n-1]=0;

    for(int i=n-2; i>=0; i--)
    {
        if(a[i]<=max)
        {
            a[i]=max+1-a[i];
        }
        else
        {
            max=a[i];
            a[i]=0;
        }
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;


    return 0;
}


