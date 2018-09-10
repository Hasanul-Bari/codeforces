#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    char a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    int c=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='W' || a[i][j]=='B' || a[i][j]=='G')
                c++;
        }
    }

    if(c==(n*m))
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;


}
