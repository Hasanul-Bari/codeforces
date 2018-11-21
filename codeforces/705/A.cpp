#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s3;

    for(int i=1; i<=n; i++)
    {
        if(i==n && i%2==0)
        {
            s3=s3+"I love it";
            break;
        }
        if(i==n && i%2!=2)
        {
            s3=s3+"I hate it";
            break;
        }

        if(i%2==0)
            s3=s3+"I love that ";
        else
            s3=s3+"I hate that ";
    }

    cout<<s3<<endl;
    return 0;



}
