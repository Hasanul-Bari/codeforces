#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    char a[n][5];

    for(int i=0; i<n; i++)
        for(int j=0; j<5; j++)
            cin>>a[i][j];

    for(int i=0; i<n; i++)
    {

        if(a[i][0]=='O' && a[i][1]=='O')
        {
            a[i][0]='+';
            a[i][1]='+';
            c=1;
            break;
        }

        if(a[i][3]=='O' && a[i][4]=='O')
        {
            a[i][3]='+';
            a[i][4]='+';
            c=1;
            break;
        }

    }
    if(c==1)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;





}
