#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int s=a,x;

    while(a>=b)
    {
        s=s+(a/b);
        x=a%b;
        a=(a/b)+x;

    }


    cout<<s<<endl;
    return 0;
}
