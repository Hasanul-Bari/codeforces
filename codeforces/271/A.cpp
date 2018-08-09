#include<iostream>
using namespace std;

int main()
{
    int y,a[4];
    cin>>y;
    y++;

    while(1)
    {
        int yr=y;
        for(int i=0; i<4; i++)
        {
            a[i]=yr%10;
            yr=yr/10;
        }
        if(a[0]!=a[1] && a[0]!=a[2] && a[0]!=a[3] && a[1]!=a[2] && a[1]!=a[3] && a[2]!=a[3])
            break;
        else
            y++;
    }
    cout<<y<<endl;

    return 0;
}
