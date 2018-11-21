#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")
            c=c+4;
        else if(s=="Cube")
            c=c+6;
        else if(s=="Octahedron")
            c=c+8;
        else if(s=="Dodecahedron")
            c=c+12;
        else if(s=="Icosahedron")
            c=c+20;

    }

    cout<<c<<endl;
    return 0;
}
