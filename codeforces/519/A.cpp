#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[8][8];
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            cin>>a[i][j];

    int w=0,b=0;

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(a[i][j]=='Q')
                w=w+9;
            if(a[i][j]=='R')
                w=w+5;
            if(a[i][j]=='B')
                w=w+3;
            if(a[i][j]=='N')
                w=w+3;
            if(a[i][j]=='P')
                w=w+1;
            if(a[i][j]=='q')
                b=b+9;
            if(a[i][j]=='r')
                b=b+5;
            if(a[i][j]=='b')
                b=b+3;
            if(a[i][j]=='n')
                b=b+3;
            if(a[i][j]=='p')
                b=b+1;

        }



    }

    //cout<<w<<" "<<b<<endl;
    if(w>b)
        cout<<"White"<<endl;
    else if(w<b)
        cout<<"Black"<<endl;
    else
        cout<<"Draw"<<endl;

    return 0;

}
