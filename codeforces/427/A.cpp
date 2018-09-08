#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int p=0,c=0;

    for(int i=0; i<n; i++)
    {
        if(a[i]==-1)
        {
            if(p>0)
            {
                p--;
            }
            else
            {
                c=c+1;
            }
        }
        else
        {
            p=p+a[i];
        }
    }

    cout<<c<<endl;
    return 0;
}
