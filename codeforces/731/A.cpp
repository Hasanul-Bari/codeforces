#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[105];
    cin>>s;

    int c=0,hp=0;


    if(s[0]-'a' > 26-(s[0]-'a') )
    {
        c=26-(s[0]-'a');
    }
    else
    {
        c=s[0]-'a';
    }

    hp=hp+c;




    for(int i=1; i<strlen(s); i++)
    {
        /*if(s[i]<s[i-1])
            swap(s[i],s[i-1]);*/

        if(s[i]>=s[i-1])
        {

            if(s[i]-s[i-1] > 26-(s[i]-s[i-1]) )
            {
                c=26-(s[i]-s[i-1]);

            }
            else
            {
                c=s[i]-s[i-1];
            }


        }

        else
        {
            if(s[i-1]-s[i] > 26-(s[i-1]-s[i]) )
            {
                c=26-(s[i-1]-s[i]);
            }
            else
            {
                c=s[i-1]-s[i];
            }
        }
        hp=hp+c;
    }

    cout<<hp<<endl;
    return 0;
}
