#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,hp=1;
    cin>>n;

    int a,b,c,d;
        cin>>a>>b>>c>>d;
    int s=a+b+c+d;


    for(int i=2; i<=n; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int x=a+b+c+d;
        if(x>s)
            hp++;
    }
    cout<<hp<<endl;
    return 0;
}
