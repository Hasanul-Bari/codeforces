#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);



    int j=0,c=0,ans=1,max=0;

    for(int i=0; i<n; i++)
    {
        if(a[i]-a[j]<=5)
        {
            c++;
        }
        else
        {
            //ans=ans+c;
            if(max<c)
                max=c;

            j++;
        }

        //cout<<c<<" * "<<a[i]<<endl;

    }
    if(max<c)
        max=c;



    cout<<max<<endl;

    return 0;
}



