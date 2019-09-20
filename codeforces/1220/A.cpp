#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int x;
    string s;


    cin>>x>>s;
    int o=0,n=0,e=0,z=0,r=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]=='o')
            o++;
        else if(s[i]=='n')
            n++;
        else if(s[i]=='e')
            e++;
        else if(s[i]=='z')
            z++;
        else if(s[i]=='r')
            r++;
    }

    int p=min(n,min(o,e)),q=0;

    o=o-p;
    e=e-p;


    if(o>0 && e>0)
        q=min(z,min(e,min(r,o)));




    for(int i=0; i<p; i++)
        cout<<1<<" ";
     for(int i=0; i<q; i++)
        cout<<0<<" ";

    cout<<endl;



    return 0;
}

