#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    bool c=true;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==1)
            c=false;
    }
    if(c==false)
        cout<<"HARD\n";
    else
        cout<<"EASY\n";

    return 0;
}
