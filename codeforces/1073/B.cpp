#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    map<int,int> m;

    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d",&x);
        m[x]=i;
    }

    int c=0;


    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d",&x);
        //cout<<m[x]<<endl;

        if(m[x]>=c)
        {
            printf("%d ",m[x]-c);
            c=c+(m[x]-c);
            //cout<<c<<endl;
        }
        else
            printf("0 ");

    }
    printf("\n");



    return 0;


}
