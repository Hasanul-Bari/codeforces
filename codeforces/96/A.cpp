#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int x=str.find("0000000");
    int y=str.find("1111111");

    if(x>=0 || y>=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
