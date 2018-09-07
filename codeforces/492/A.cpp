#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1,sum=0,l=0,c=0;

    while(l<=n)
    {
        sum=sum+i;
        l=l+sum;
        i++;
        c++;
    }

    cout<<c-1<<endl;
    return 0;
}
