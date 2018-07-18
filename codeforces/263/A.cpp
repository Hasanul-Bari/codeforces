#include<iostream>
using namespace std;
int main()
{
    int a[5][5],li,lj;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>a[i][j];
        }

    }


    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
                li=i+1;
                lj=j+1;
            }
        }
    }
    int c=0;
    while(li<3)
    {
        li++;
        c++;
    }
    while(li>3)
    {
        li--;
        c++;
    }
    while(lj<3)
    {
        lj++;
        c++;
    }
    while(lj>3)
    {
        lj--;
        c++;
    }

    cout<<c<<endl;

    return 0;

}
