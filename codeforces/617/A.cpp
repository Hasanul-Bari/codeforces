#include<iostream>
using namespace std;

int main()
{
    int a[5]={5,4,3,2,1};
    int x,sum=0,c=0;
    cin>>x;
    int i=5,s=0;
    while(i!=0)
    {
        s=s+x/i;
        x=x%i;
        i--;
    }
    cout<<s<<endl;
    return 0;

}
