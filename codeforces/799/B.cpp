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

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    set<int> m1,m2,m3;
    set<int> :: iterator it;
    map<int,bool> visited;


    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==1)
        {
            m1.insert(a[i]);
        }
        else if(x==2)
        {
            m2.insert(a[i]);
        }
        else
        {
            m3.insert(a[i]);
        }
    }

    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==1)
        {
            m1.insert(a[i]);
        }
        else if(x==2)
        {
            m2.insert(a[i]);
        }
        else
        {
            m3.insert(a[i]);
        }
    }


    int m;
    cin>>m;

    //cout<<m1.size()<<" ** "<<m2.size()<<" ** "<<m3.size()<<endl;


    while(m--)
    {
        cin>>x;

        if(x==1)
        {
            if(m1.size()==0)
                cout<<-1<<" ";
            else
            {
                it=m1.begin();
                int z=*it;

                while(visited[z]==true)
                {
                    m1.erase(m1.begin());

                    if(m1.size()==0)
                    {
                        z=-1;
                        break;
                    }
                    else
                    {
                        it=m1.begin();
                        z=*it;
                    }

                }
                if(z!=-1)
                {
                    visited[z]=true;
                    m1.erase(m1.begin());
                }

                cout<<z<<" ";
            }

        }
        else if(x==2)
        {
            if(m2.size()==0)
                cout<<-1<<" ";
            else
            {
                it=m2.begin();
                int z=*it;

                while(visited[z]==true)
                {
                    m2.erase(m2.begin());

                    if(m2.size()==0)
                    {
                        z=-1;
                        break;
                    }
                    else
                    {
                        it=m2.begin();
                        z=*it;
                    }

                }

                if(z!=-1)
                {
                    visited[z]=true;
                    m2.erase(m2.begin());
                }

                cout<<z<<" ";
            }

        }

        if(x==3)
        {
            if(m3.size()==0)
                cout<<-1<<" ";
            else
            {
                it=m3.begin();
                int z=*it;

                //cout<<endl<<z<<" =z"<<endl;

                while(visited[z]==true)
                {
                    m3.erase(m3.begin());

                    if(m3.size()==0)
                    {
                        z=-1;
                        break;
                    }
                    else
                    {
                        it=m3.begin();
                        z=*it;
                    }

                }

                if(z!=-1)
                {
                    visited[z]=true;
                    m3.erase(m3.begin());
                }


                cout<<z<<" ";
            }


        }

        //cout<<m1.size()<<" ** "<<m2.size()<<" ** "<<m3.size()<<endl;





    }
    cout<<endl;


    return 0;
}
