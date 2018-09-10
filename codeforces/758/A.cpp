#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int ma=a[0];

    for(int i=1; i<n; i++)
    {
        if(a[i]>ma)
            ma=a[i];
    }

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+(ma-a[i]);
    }

    cout<<sum<<endl;

    return 0;


}
