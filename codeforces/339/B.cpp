#include<iostream>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long *a=new long long [m];

    for(long long i=0; i<m; i++)
    {
        cin>>a[i];
    }

    long long c=a[0]-1;

    for(long long i=1; i<m; i++)
    {
        if(a[i]>=a[i-1])
            c=c+(a[i]-a[i-1]);

        else
            c=c+((a[i]+n)-a[i-1]);
    }

    cout<<c<<endl;

    return 0;
}
