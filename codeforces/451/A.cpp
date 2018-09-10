#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int s=n*m;
    int c=0;

    while(s>0)
    {
        n=n-1;
        m=m-1;
        s=n*m;
        c++;
    }
    //cout<<c<<endl;

    if(c%2==0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;

    return 0;


}
