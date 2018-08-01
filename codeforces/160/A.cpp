#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int [n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for (int i=1; i<n; i++)
        for(int j=0; j<n-i; j++)
            if(a[j+1]>a[j])
                swap(a[j+1],a[j]);


    int sum1=0,c=0;;
    for(int i=0; i<n; i++)
    {
        int sum2=0,j,k;

        for( j=i+1; j<n; j++)
            sum2=sum2+a[j];

        for(k=i; k<i+1; k++)
            sum1=sum1+a[k];

        c++;
        //cout<<endl<<sum1<<" "<<sum2<<endl<<c<<endl;
        if(sum1>sum2)
            break;


    }
    cout<<c<<endl;
    return 0;
}
