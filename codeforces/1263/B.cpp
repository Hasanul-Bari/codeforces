#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster



    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        string s[n];
        map<string,int> m;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            m[s[i]]++;
        }


        int c=0;

        for(int i=0; i<n; i++)
        {
            if(m[s[i]]>1)
            {
                c++;
                m[s[i]]--;
                //cout<<s[i][3]<<endl;

                bool hp=false;




                for(int j=3; j>=0; j--)
                {
                    char ch=s[i][j],e;
                    e=ch;
                    ch++;
                    if(int(ch)==58)
                        ch='0';

                    s[i][j]=ch;

                    while(m[s[i]]!=0)
                    {
                        ch++;
                        if(e==ch)
                        {
                            s[i][j]=ch;
                            hp=true;
                            break;
                        }


                        if(int(ch)==58)
                            ch='0';

                        s[i][j]=ch;
                    }
                    if(hp==false)
                    {
                        m[s[i]]++;
                        break;
                    }
                }


                //cout<<s[i]<<endl;
            }

        }
        cout<<c<<endl;
        for(int i=0; i<n; i++)
            cout<<s[i]<<endl;


    }





    return 0;
}
