#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int k=1,l=2;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=1; j<=m; j++)
                cout<<"#";
        }
        else if(i%2==0 && i==2*k && k%2!=0)
        {
            for(int j=1; j<=m; j++)
            {
                if(j<m)
                    cout<<".";
                else
                    cout<<"#";
            }
            k=k+2;
        }

        else if(i%2==0 && i==2*l && l%2==0 )
        {
            for(int j=1; j<=m; j++)
            {
                if(j==1)
                    cout<<"#";
                else
                    cout<<".";
            }
            l=l+2;
        }





        cout<<endl;
    }

    return 0;

}
