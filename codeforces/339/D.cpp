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
    ll value;
    bool op;              // true hoile or
};


int a[131099];
info tree[524400];
int c;

void seg(int node,int b,int e)
{
    if(b==e)
    {

        //cout<<node<<" "<<a[b]<<endl;
        tree[node].value=a[b];
        tree[node].op=true;
        //cout<<tree[node].value<<endl;
        return;
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    seg(left,b,mid);
    seg(right,mid+1,e);


    if(tree[left].op==true)
    {
        //cout<<"OR "<<node<<endl;
        tree[node].value=tree[left].value | tree[right].value;
        tree[node].op=false;
    }
    else
    {
        //cout<<"XOR "<<node<<endl;
        tree[node].value=tree[left].value ^ tree[right].value;
        tree[node].op=true;
    }


}


void update(int node,int b,int e,int i,int value)
{
    if(i>e || i<b)
        return;

    if(i<=b && e<=i)
    {
        tree[node].value=value;
        tree[node].op=true;
        return;
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);

    if(tree[left].op==true)
    {
        //cout<<"OR "<<node<<endl;
        tree[node].value=tree[left].value | tree[right].value;
        tree[node].op=false;
    }
    else
    {
        //cout<<"XOR "<<node<<endl;
        tree[node].value=tree[left].value ^ tree[right].value;
        tree[node].op=true;
    }


}



int main()
{
    faster

    int nn,m,n=1;
    cin>>nn>>m;

    while(nn--)
    {
        n=n*2;
    }

    //cout<<n<<endl;

    for(int i=1; i<=n; i++)
        cin>>a[i];

    seg(1,1,n);


    /*for(int i=1; i<=3*n; i++)
        cout<<tree[i].value<<" ";
    cout<<endl;*/






    int l,r;
    while(m--)
    {
        cin>>l>>r;
        update(1,1,n,l,r);
        cout<<tree[1].value<<endl;

        /*for(int i=1; i<=3*n; i++)
            cout<<tree[i].value<<" ";
        cout<<endl;*/
    }








    return 0;
}



