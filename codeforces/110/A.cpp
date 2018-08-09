#include<iostream>
using namespace std;

int main()
{
    long long n,c=0;
    cin>>n;
    long long nm=n;

    while(nm!=0)
    {
        int digit=nm%10;
        nm=nm/10;

        if(digit==7 || digit==4)
        {
            c++;
        }
    }

    //cout<<c<<endl;

    if(c==0)
        cout<<"NO"<<endl;
    else
    {
        long long c1=0;
        while(c!=0)
        {
            int digit=c%10;
            c=c/10;

            if(digit!=7 && digit!=4)
            {
                c1++;
                break;
            }
        }
        //cout<<c1<<endl;

        if(c1==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }






    return 0;
}
