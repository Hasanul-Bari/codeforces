#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int a[3];
    a[0]=(k*l)/nl;
    a[1]=c*d;
    a[2]=p/np;

    sort(a,a+3);
    cout<<a[0]/n<<endl;

    return 0;


}
