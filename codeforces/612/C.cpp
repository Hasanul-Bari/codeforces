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

    string s;
    cin>>s;

    int n=s.length();

    stack<char> st;

    int cc=0;

    for(int i=n-1; i>=0; i--)
    {
        if(s[i]=='>' || s[i]==')' || s[i]=='}' || s[i]==']')
        {
            st.push(s[i]);
        }
        else if(st.empty()!=true)
        {
            char c=st.top();
            st.pop();

            if(c=='>' && s[i]!='<')
                cc++;
            else if(c==')' && s[i]!='(')
                cc++;
            else if(c=='}' && s[i]!='{')
                cc++;
            else if(c==']' && s[i]!='[')
                cc++;

        }
        else
        {
            cout<<"Impossible"<<endl;
            return 0;
        }

    }
    if(st.empty()!=true)
        cout<<"Impossible"<<endl;
    else
        cout<<cc<<endl;







    return 0;
}
