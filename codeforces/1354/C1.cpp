#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    //faster

    int t;
    cin>>t;

    double n;

    while(t--)
    {
        cin>>n;


        printf("%.12lf\n", 1/(tan( (180.0/ (2.0*n) ) *PI/180.0)) );


    }




    return 0;
}
