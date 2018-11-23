#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=1; i<n-1; i++)
    {
        if(a[i-1]==1 && a[i+1]==1 && a[i]==0)
        {
            a[i+1]=0;
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
