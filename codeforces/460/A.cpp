#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int x=n,y=n;


    while(y>0)
    {
        n=n+x/m;
        x=(x%m)+x/m;
        y=y/m;

    }
    cout<<n<<endl;
    return 0;

}
