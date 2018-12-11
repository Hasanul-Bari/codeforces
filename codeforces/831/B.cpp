#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;

    for(int i=0; i<c.length(); i++)
    {
        int cc=0;
        for(int j=0; j<a.length(); j++)
        {
            if(tolower(c[i])==a[j])
            {
                cc=1;
                if(isupper(c[i]))
                    cout<<(char)toupper(b[j]);
                else
                    cout<<b[j];
            }
        }
        if(cc==0)
            cout<<c[i];

    }
    cout<<endl;
    return 0;
}
