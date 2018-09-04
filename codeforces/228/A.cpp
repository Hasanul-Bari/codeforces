#include<iostream>
using namespace std;

int main()
{
    long long *a= new long long [4];
    for(int i=0; i<4; i++)
    {
        cin>>a[i];
    }

    int c=0;
    if(a[0]== a[1] || a[0]==a[2] || a[0]==a[3])
    {
        c++;
    }

    if(a[1]== a[2] || a[1]==a[3])
    {
        c++;
    }
    if(a[2]== a[3])
    {
        c++;
    }

    cout<<c<<endl;
    return 0;
}
