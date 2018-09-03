#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a= new int [n];
    int *x= new int [n];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<=n; i++)
    {
        if(a[i]!=i)
        {
            x[a[i]]=i;
        }
        else
            x[i]=i;
    }

    for(int i=1; i<n; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<x[n]<<endl;


}
