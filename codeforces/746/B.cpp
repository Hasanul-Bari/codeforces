#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s,h;
    cin>>n>>s;

    if(n%2!=0)
    {
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
                h=h+s[i];
            else
                h=s[i]+h;
        }

        cout<<h<<endl;

    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
                h=s[i]+h;
            else
                h=h+s[i];
        }

        cout<<h<<endl;
    }



    return 0;
}

