#include<bits/stdc++.h>
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n,k;
    string s;
    cin>>n>>k>>s;

    int c=0,j;
    int a[27]={0};

    for(int i=0; i<s.length(); i++)
    {
        j=s[i]-64;
        a[j]++;

    }

    c=a[1];
    for(int i=2; i<=k; i++)
    {
        if(a[i]<c)
            c=a[i];

    }
    cout<<c*k<<endl;



    return 0;
}
