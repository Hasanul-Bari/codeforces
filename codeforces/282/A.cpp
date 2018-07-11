#include<iostream>
using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s,s1,s2,s3,s4;
        s1="++X";
        s2="X++";
        s3="--X";
        s4="X--";
        cin>>s;
        if(s==s1)
            ++x;
        else if(s==s2)
            x++;
        else if(s==s3)
            --x;
        else if(s==s4)
            x--;

    }

    cout<<x<<endl;
    return 0;


}
