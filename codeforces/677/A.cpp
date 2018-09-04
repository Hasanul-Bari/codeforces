#include<iostream>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;

    int *a= new int [n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int c=0;

    for(int i=0; i<n; i++)
    {
        if(a[i]>h)
            c++;
    }

    cout<<n+c<<endl;

    return 0;

}
