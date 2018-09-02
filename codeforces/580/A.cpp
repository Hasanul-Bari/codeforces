#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long *a= new long long[n];

    for(int i=0; i<n ;i++)
    {
        cin>>a[i];
    }

    long long c=1,m=1;
    int k=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i+1]>=a[i])
        {
            c++;
           // cout<<c<<" c "<<endl;
        }



        else
        {
            k++;
            if(m<=c)
            {
                 m=c;
                // cout<<m<<" m "<<endl;
            }
            c=1;
        }
    }

    if(m<c)
        cout<<c<<endl;
    else
        cout<<m<<endl;

    return 0;

}
