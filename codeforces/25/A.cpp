#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int [n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int e=0,o=0;

    if(a[0]%2==0)
        e++;
    else
        o++;

    if(a[1]%2==0)
        e++;
    else
        o++;

    if(a[2]%2==0)
        e++;
    else
        o++;

    if(e>o)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
                cout<<i+1<<endl;
        }
    }

    else if(e<o)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
                cout<<i+1<<endl;
        }
    }

    return 0;
}
