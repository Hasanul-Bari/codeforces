#include<bits/stdc++.h>

#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d%d",&x,&y)
#define sf3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sf4(x,y,z,w) scanf("%d%d%d%d",&x,&y,&z,&w)

#define pf1(x) printf("%d",x)
#define pf2(x,y) printf("%d %d",x,y)
#define pf3(x,y,z) printf("%d %d %d",x,y,z)
#define pf4(x,y,z,w) printf("%d %d %d %d",x,y,z,w)
#define nl printf("\n");


using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,x4,y3,y4;

    sf4(x1,y1,x2,y2);
    //pf4(x1,y1,x2,y2); nl;

    if(x1!=x2 && y1!=y2 && (abs(x2-x1)==abs(y2-y1)) )
    {

        x3=x1;
        y3=y2;
        x4=x2;
        y4=y1;
        pf4(x3,y3,x4,y4); nl;
    }

    else if(x1==x2 && y1!=y2)
    {
        int a=abs(y1-y2);
        x3=x1+a;
        y3=y1;
        x4=x1+a;
        y4=y2;
        pf4(x3,y3,x4,y4); nl;

    }

    else if(y1==y2 && x1!=x2)
    {
        int a=abs(x1-x2);
        x3=x1;
        y3=y1+a;
        x4=x2;
        y4=y1+a;
        pf4(x3,y3,x4,y4); nl;
    }
    else
        pf1(-1);nl;



    return 0;

}
