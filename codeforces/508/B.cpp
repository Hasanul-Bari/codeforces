#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    string s;
    cin>>s;
    int l=s.length();
    int x=s[l-1]-48,y,hp=0;
    //cout<<x<<endl;

    int a=-1,b=-1,c;

    for(int i=0; i<l-1; i++)
    {
        y=s[i]-48;
        if(y%2==0 && x>y && hp==0)
        {
            //swap(s[l-1],s[i]);
            a=i;
            hp=1;
        }
        if(y%2==0)
        {
            b=i;
        }

    }
    if(b==-1)
        cout<<-1<<endl;
    else if(a!=-1)
    {
        swap(s[l-1],s[a]);
        cout<<s<<endl;
    }
    else
    {
        swap(s[l-1],s[b]);
        cout<<s<<endl;
    }




    return 0;
}
