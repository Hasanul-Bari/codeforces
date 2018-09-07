#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int r=240-k;

    int s=0,c=0;

    for(int i=1; i<=n; i++)
    {
        s=s+(5*i);
        if(s>r)
        {
            break;
        }
        c++;
    }

    cout<<c<<endl;
    return 0;
}
