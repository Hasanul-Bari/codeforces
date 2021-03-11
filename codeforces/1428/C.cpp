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

    int t;
    cin>>t;

    string s;



    while(t--)
    {
        cin>>s;

        int cc=0;
        stack<char> st;

        for(char c : s)
        {
            if(c=='B')
            {
                if(st.size()==0)
                {
                    st.push(c);
                }
                else
                {
                    st.pop();
                    cc=cc+2;
                }

            }
            else
                st.push(c);


            //cout<<c<<" "<<cc<<endl;
        }

        int n=s.length();


        cout<<n-cc<<endl;
    }




    return 0;
}

