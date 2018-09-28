#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=0,c=0;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
            m++;
        else if(a<b)
            c++;
    }

    if(m>c)
        cout<<"Mishka"<<endl;
    else if(m<c)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;

    return 0;

}
