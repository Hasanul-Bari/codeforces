#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int t;

    cin>>t;

    string s;

    while(t--)
    {
        cin>>s;

        int n=s.length();

        int x=0,y=0,tx,ty;

        map< pair< pair<int,int>, pair<int,int> >,bool> m;



        ll ss=0;
        for(int i=0; i<n; i++)
        {
            tx=x,ty=y;

            if(s[i]=='N')
                y--;
            else if(s[i]=='S')
                y++;
            else if(s[i]=='E')
                x++;
            else if(s[i]=='W')
                x--;




            if(m[ {{tx,ty},{x,y}}]==true)
            ss=ss+1;
            else
                ss=ss+5;

            m[ {{tx,ty},{x,y}}]=true;
            m[ {{x,y},{tx,ty}}]=true;

            //cout<<ss<<endl;


        }
        cout<<ss<<endl;
    }




    return 0;
}
