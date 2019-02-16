#include<bits/stdc++.h>
using namespace std;

struct cell
{
    int x,y;
};
int r,c;
char a[1001][1001];

int mx[4]= {-1,1,0,0};
int my[4]= {0,0,-1,1};

void bfs(cell src, cell des)
{
    bool visited[r][c];
    memset(visited,false,sizeof(visited));

    int level[r][c];
    memset(level,0,sizeof(level));


    queue <cell> q;

    visited[src.x][src.y]=true;
    level[src.x][src.y]=0;

    q.push(src);

    while(q.empty()!=1)
    {
        cell u=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            cell v;
            v.x=u.x+mx[i];
            v.y=u.y+my[i];
            if( (v.x>=0 && v.x<r) && (v.y>=0 && v.y<c ) &&  visited[v.x][v.y]==false && a[v.x][v.y]!='T' )
            {

                visited[v.x][v.y]=true;
                level[v.x][v.y]=(level[u.x][u.y])+1;
                q.push(v);
            }
        }
    }

    int e=level[des.x][des.y],ans=0;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            //cout<<level[i][j]<<" ";
            if(isdigit(a[i][j])  && a[i][j]!=0  && level[i][j]<=e && level[i][j]!=0 )
            {
                ans=ans+(a[i][j]-48);
            }
        }
        //cout<<endl;
    }


    cout<<ans<<endl;


}


int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);



    cin>>r>>c;

    cell src,des, srcc;
    vector<cell> v;
    vector<int> z;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];

            if(a[i][j]=='S')
            {
                src.x=i;
                src.y=j;
            }
            if(a[i][j]=='E')
            {
                des.x=i;
                des.y=j;
            }
        }
    }

    bfs(des,src);


    return 0;


}
