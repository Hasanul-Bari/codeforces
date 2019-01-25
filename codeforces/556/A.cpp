#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int x=s.length();

    for(int i=0; i<x-1; )
    {
        if((s[i]=='0' && s[i+1]=='1')  )
        {
           // cout<<i<<" "<<i+1<<" "<<s.length()<<endl;
            s.erase(i,1);
            s.erase(i,1);
            //cout<<s<<endl;
            //cout<<i<<endl;

            if(i-2>=0)
                i=i-2;
            else
                i=0;
        }



        else if(s[i]=='1' && s[i+1]=='0')
        {
            //cout<<i<<" "<<i+1<<" "<<s.length()<<endl;
            s.erase(i,1);
            s.erase(i,1);
            //cout<<s<<endl;
            //cout<<i<<endl;

            if(i-2>=0)
                i=i-2;
            else
                i=0;
        }
        else
            i++;

        x=s.length();
    }


    cout<<s.length()<<endl;

    //cout<<s<<endl;

    return 0;
}
