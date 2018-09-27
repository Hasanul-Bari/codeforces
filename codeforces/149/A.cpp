#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int k;
    cin>>k;
    int *a=new int[12];

    for(int i=0; i<12; i++)
    {
        cin>>a[i];
    }

    sort(a,a+12);

    int sum=0,c=0;
    for(int i=11; i>=0; i--)
    {
        if(sum>=k)
            break;

        sum=sum+a[i];
        c++;

    }

    if(sum<k)
        cout<<-1<<endl;
    else
        cout<<c<<endl;
    return 0;
}
