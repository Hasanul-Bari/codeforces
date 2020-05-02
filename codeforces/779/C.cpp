#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class price
{
public:
    int bd,ad,diff;
};


bool comparator(price p1,price p2)
{
    return p1.diff>p2.diff;
}


int main()
{
    faster

    int n,k;
    cin>>n>>k;

    price p[n];

    for(int i=0; i<n; i++)
        cin>>p[i].bd;

    for(int i=0; i<n; i++)
    {
        cin>>p[i].ad;
        p[i].diff=p[i].ad-p[i].bd;
    }



    sort(p,p+n,comparator);


    ll s=0;
    for(int i=0; i<n; i++)
    {
        //cout<<p[i].diff<<" "<<p[i].bd<<" "<<p[i].ad<<endl;

        if(i<k)
            s=s+p[i].bd;
        else
            s=s+min(p[i].ad,p[i].bd);

        //cout<<s<<endl;
    }

    cout<<s<<endl;







    return 0;
}
