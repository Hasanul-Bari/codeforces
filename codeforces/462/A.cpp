#include<iostream>
using namespace std;

int mx[4]= {-1,1,0,0};
int my[4]= {0,0,-1,1};


int main()
{
    int n;
    cin>>n;
    char aa[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>aa[i][j];
        }
    }

    int a,b,c;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            c=0;
            for(int k=0; k<4; k++)
            {
                a=i+mx[k];
                b=j+my[k];

                if(a>=0 && a<n && b>=0 && b<n)
                    if(aa[a][b]=='o')
                        c++;

            }
            //cout<<c<<" ";
            if(c%2!=0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        //cout<<endl;
    }


    cout<<"YES"<<endl;

    return 0;


}
