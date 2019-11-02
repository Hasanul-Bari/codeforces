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

    int n;
    string s;
    cin>>n>>s;

    if(n%2!=0)
    {
        cout<<"No"<<endl;
        return 0;
    }


    stack<char> st;

    int c=0;

    for(int i=n-1; i>=0; i--)
    {
        if(s[i]==')')
        {
            st.push(')');
        }
        else
        {
            if(st.empty()!=true)
            {
                st.pop();
            }
            else
            {
                c++;
            }
        }
    }

    //cout<<c<<" "<<st.size()<<endl;

    if(st.size()==1 && c==1)
        cout<<"Yes"<<endl;
    else if(st.size()==0 && c==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
