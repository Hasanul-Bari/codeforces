#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    int c=1,max=1;

    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }
        if(max<c)
            max=c;
        if(a[i]!=a[i+1])
            c=1;

        //cout<<c<<" "<<max<<endl;
    }

    cout<<max<<endl;
    return 0;

}
