#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int *x=new int [6];

    x[0]=a*b*c;
    x[1]=a*b+c;
    x[2]=a*(b+c);
    x[3]=a+b*c;
    x[4]=(a+b)*c;
    x[5]=a+b+c;

    sort(x,x+6);

    cout<<x[5]<<endl;
    return 0;

}
