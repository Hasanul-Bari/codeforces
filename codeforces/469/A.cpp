#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int p;
    cin>>p;
    int *a=new int[p+1];

    for(int i=1; i<=p; i++)
        cin>>a[i];


    int q;
    cin>>q;
    int *b=new int[q+1];

    for(int i=1; i<=q; i++)
        cin>>b[i];


    int *c=new int[n+1];

    for(int i=1; i<=n; i++)
        c[i]=i;



    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=p; j++)
        {
            if(c[i]==a[j])
                c[i]=0;
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=q; j++)
        {
            if(c[i]==b[j])
                c[i]=0;
        }
    }


    int hp=0;
    for(int i=1; i<=n; i++)
    {
        if(c[i]!=0)
        {
            hp++;
            break;
        }
    }

    if(hp==0)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

    return 0;



}
