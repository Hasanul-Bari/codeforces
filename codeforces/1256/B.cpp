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

    int n,x,q;
    cin>>q;
    while(q--)
    {
        cin>>n;

        int a[n+1];

        map<int,int> m;
        bool visited[n+1];

        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            m[a[i]]=i;

            visited[i]=false;
        }

        int i=1,c=0;;

        while(1)
        {
            while((m[i]-1>0 && visited[m[i]-1]==false && a[m[i]]<a[m[i]-1]) || (m[i]+1<=n && visited[m[i]]==false && a[m[i]]>a[m[i]+1]) )
            {
                if(m[i]-1>0 && visited[m[i]-1]==false && a[m[i]]<a[m[i]-1])
                {
                    swap(a[m[i]],a[m[i]-1]);
                    visited[m[i]-1]=true;
                    c++;

                    m[i]--;
                    m[a[m[i]-1]]++;

                    //cout<<a[m[i]]<<" 1*** "<<a[m[i]-1]<<endl;

                }
                else if(m[i]+1<=n && visited[m[i]]==false && a[m[i]]>a[m[i]+1])
                {
                    swap(a[m[i]],a[m[i]+1]);
                    visited[m[i]]=true;
                    c++;

                    m[i]++;;
                    m[a[m[i]+1]]--;

                    //cout<<a[m[i]]<<" 2*** "<<a[m[i]+1]<<endl;
                }
            }
            i++;

            if(c==n-1)
                break;
            if(i==n)
                break;

        }


        for(int i=1; i<=n; i++)
            cout<<a[i]<<" ";
        cout<<endl;

    }




    return 0;
}

/*
5
2 5 1 4 3
*/

/*
5
2 3 4 5 1
*/
