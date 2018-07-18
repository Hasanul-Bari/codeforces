#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c=0,d,ca=0,max=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a<=b)
        {
            d=b-a;
            c=c+d;
        }
        else
        {
            d=a-b;
            c=c-d;
        }
        ca=ca+c;
        if(max<=ca)
            max=ca;

        c=0;


        }

        cout<<max<<endl;

}

