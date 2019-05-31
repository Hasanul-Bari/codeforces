#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int dx[]= {-1,1,0,0};
int dy[]= {0,0,-1,1};

int main()
{
    faster

    int r,c;
    cin>>r>>c;
    char a[r][c];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>a[i][j];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(a[i][j]=='S')
            {
                for(int k=0; k<4; k++)
                {

                    int x=i+dx[k];
                    int y=j+dy[k];

                    if( (x>=0 && x<r) && (y>=0 && y<c) )
                    {
                        if(a[x][y]=='W')
                        {
                            cout<<"No"<<endl;
                            return 0;
                        }
                        else if(a[x][y]=='.')
                        {
                            a[x][y]='D';
                        }
                    }

                }
            }
        }
    }
    cout<<"Yes"<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            cout<<a[i][j];
        cout<<endl;
    }




    return 0;
}
