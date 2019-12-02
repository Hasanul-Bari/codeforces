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

    int n,x;
    cin>>n;

    map<int,int> m;
    vector<int> v;

    int c=0,cc=0;
    bool hp=true;

    for(int i=1; i<=n; i++)
    {
        cin>>x;

        if(x>0)
        {
            if(m[x]==0)
            {
                m[x]++;
                c++;
                cc++;
            }
            else
            {
                if(c==0)
                {
                    v.pb(cc);
                    cc=0;
                    m.clear();

                    m[x]++;
                    c++;
                    cc++;
                }
                else
                {
                    hp=false;
                }
            }

        }
        else if(x<0)
        {
            //cout<<-x<<" "<<m[-x]<<endl;
            x=-x;
            if(m[x]==0)
                hp=false;
            else
            {
                if(m[x]==2)
                    hp=false;
                else
                {
                    c--;
                    cc++;
                    m[x]++;

                    if(c==0)
                    {
                        v.pb(cc);
                        cc=0;
                        m.clear();
                    }
                }

            }
        }

        //cout<<c<<endl;
    }
    if(c!=0)
        hp=false;

    if(hp==false)
    {
        cout<<-1<<endl;
        return 0;
    }

    cout<<v.size()<<endl;

    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;






    return 0;
}
