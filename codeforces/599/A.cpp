#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long d1,d2,d3;
    cin>>d1>>d2>>d3;

    int s=d1+d3+d2;

    if(s> 2*(d1+d2))
        s=2*(d1+d2);

    if(s>2*(d1+d3))
        s=2*(d1+d3);

    if(s>2*(d2+d3))
    s=2*(d2+d3);

    cout<<s<<endl;
    return 0;

}
