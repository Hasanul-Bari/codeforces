#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;

    double c=ceil((double)(a1+a2+a3)/5);
    double m=ceil((double)(b1+b2+b3)/10);

    double s=c+m;

    //cout<<c<<" "<<m<<" "<<s<<endl;

    if(n>=s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;


}
