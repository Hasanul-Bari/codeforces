#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0; i<n;  i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<n; i++)
        for(int j=0; j<n-i; j++)
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);

    for(int i=0; i<n-1;  i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;

    return 0;


}
