#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

char adj[55][55];
bool visited [55][55];
int n;

struct cell
{
    int x,y;
};
int mx[2]= {-1,0};
int my[2]= {0,-1};

bool isvalid(int x, int y)
{
    //cout<<x<<" "<<y<<" "<<r<<" "<<c<<endl;
    if(x>=0 && x<n && y>=0 && y<n)
        return true;
    else
        return false;
}
void dfs(cell src)
{
    visited[src.x][src.y]=true;

    //cout<<src.x<<" ## "<<src.y<<endl;;
    for(int i=0; i<2; i++)
    {
        cell v;
        v.x=src.x+mx[i];
        v.y=src.y+my[i];
        //cout<<visited[v.x][v.y]<<" "<<isvalid(v.x,v.y)<<" "<<adj[v.x][v.y]<<" "<<v.x<<" "<<v.y<<endl;
        if(visited[v.x][v.y]==false && isvalid(v.x,v.y)==true  && adj[v.x][v.y]=='1')
        {
            dfs(v);
        }
    }
}
int main()
{
    //faster
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;



        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>adj[i][j];
                visited[i][j]=false;
            }
        }

        for(int i=n-1; i>=0; i--)
        {

            cell src;
            src.x=n-1 , src.y=i;

            if(visited[src.x][src.y]==false && adj[src.x][src.y]=='1' )
                dfs(src);
        }

        for(int i=n-1; i>=0; i--)
        {

            cell src;
            src.x=i , src.y=n-1;

            if(visited[src.x][src.y]==false && adj[src.x][src.y]=='1' )
                dfs(src);
        }


        bool hp=true;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                //cout<<visited[i][j]<<" * "<<adj[i][j]<<"    ";

                if(adj[i][j]=='1' && visited[i][j]==false)
                {
                    hp=false;
                    break;
                }
            }


            if(hp==false)
                break;
            //cout<<endl;
        }

        if(hp==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;



    }
    return 0;

}
