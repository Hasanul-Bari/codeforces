#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,hp=0;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        string s;
        int a,b;
        cin>>s>>a>>b;

        if(a<b && a>=2400)
        {
            hp=1;

        }
    }
    if(hp==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
