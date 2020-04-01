#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class info
{
public:
    int sum,op,cl;
};



string s;
info tree[4000099];

void seg(int node,int b,int e)
{
    if(b==e)
    {
        //cout<<node<<" ** "<<b<<endl;

        if(s[b-1]=='(')
        {
            tree[node].op=1;
        }
        else
        {
            tree[node].cl=1;
        }

        return;
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    seg(left,b,mid);
    seg(right,mid+1,e);


    int tmp=min(tree[left].op,tree[right].cl);
    tree[node].sum=tree[left].sum+tree[right].sum+tmp;

    tree[node].op=tree[left].op+tree[right].op-tmp;
    tree[node].cl=tree[left].cl+tree[right].cl-tmp;


    //cout<<tree[node].sum<<" "<<tree[node].op<<" "<<tree[node].cl<<" <-- "<<node<<endl;
}




info query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
    {
        info z;
        z.sum=0,z.op=0,z.cl=0;
        return z;
    }

    if(i<=b && e<=j)
        return tree[node];

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;


    info x=query(left,b,mid,i,j);
    info y=query(right,mid+1,e,i,j);

    info z;

    int tmp=min(x.op,y.cl);
    z.sum=x.sum+y.sum+tmp;
    z.op=x.op+y.op-tmp;
    z.cl=x.cl+y.cl-tmp;



    return z;
}



int main()
{
    faster


    cin>>s;


    seg(1,1,s.length());

    int q,i,j;
    cin>>q;
    while(q--)
    {
        cin>>i>>j;

        info z=query(1,1,s.length(),i,j);

        cout<<z.sum*2<<endl;
    }


    return 0;
}



