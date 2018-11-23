#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    string s;
    int l,r;
    char c1,c2;
    cin>>n>>m>>s;

    for(int i=0; i<m; i++)
    {
        cin>>l>>r>>c1>>c2;
        for(int j=l-1; j<r; j++)
        {
            if(s[j]==c1)
                s[j]=c2;
        }
        //cout<<s<<endl;
    }
    cout<<s<<endl;
    return 0;
}
