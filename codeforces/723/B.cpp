#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n;
    string s;
    cin>>n>>s;

    int ans1=0, ans2=0, c1=0;
    bool hp=0,c2=0;

    for(int i=0; i<n; i++)
    {

        if(hp==0)
        {
            if(isalpha(s[i]))
            {
                c1++;
                //cout<<s[i]<<" ";
            }
            else
            {
                ans1=max(ans1,c1);
                c1=0;
            }
        }
        else if(hp==1)
        {
            if(isalpha(s[i]))
            {
                c2=1;
                //cout<<s[i]<<" ";
            }
            else
            {
                if(c2!=0)
                    ans2++;
                c2=0;
            }
        }

        if(s[i]=='(')
            hp=1;
        if(s[i]==')')
            hp=0;
    }
    ans1=max(ans1,c1);

    cout<<ans1<<" "<<ans2<<endl;

    return 0;
}
