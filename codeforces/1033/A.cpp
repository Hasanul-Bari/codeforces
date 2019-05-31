#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int dx[]= {-1,1,0,0,-1,-1,1,1};
int dy[]= {0,0,-1,1,-1,1,-1,1};

struct cell
{
    int x,y;
};


int main()
{
    faster
    int n;
    cin>>n;
    bool a[n+3][n+3];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            a[i][j]=0;

    int xx,yy;
    cin>>xx>>yy;

    for(int i=1; i<=n; i++)
        a[xx][i]=1;

    for(int i=1; i<=n; i++)
        a[i][yy]=1;

    for(int i=xx-1,j=yy-1; i>0 && j>0; i--,j--)
    {
        a[i][j]=1;
    }

    for(int i=xx+1,j=yy+1; i<=n && j<=n; i++,j++)
    {
        a[i][j]=1;
    }

    for(int i=xx+1,j=yy-1; i<=n && j>0; i++,j--)
    {
        a[i][j]=1;
    }

    for(int i=xx-1,j=yy+1; i>0 && j<=n; i--,j++)
    {
        a[i][j]=1;
    }



    /*for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/

    cell src,des;
    cin>>src.x>>src.y>>des.x>>des.y;


    queue <cell> q;

    a[src.x][src.y]=1;

    q.push(src);

    while(q.empty()!=1)
    {
        cell u=q.front();
        q.pop();
        for(int i=0; i<8; i++)
        {
            cell v;
            v.x=u.x+dx[i];
            v.y=u.y+dy[i];
            if( (v.x>=1 && v.x<=n) && (v.y>=1 && v.y<=n ) &&  a[v.x][v.y]==0)
            {
                a[v.x][v.y]=1;
                q.push(v);
            }
        }
    }

    //cout<<a[des.x][des.y]<<endl;
    if(a[des.x][des.y]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



    return 0;
}
