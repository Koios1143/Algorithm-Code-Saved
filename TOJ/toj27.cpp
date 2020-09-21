#include<iostream>
using namespace std;

int tree[10000040];
int  arr[2000010];
int build(int L,int R,int root)
{
    if(L==R)
    {
        tree[root]=arr[L];
        return tree[root];
    }
    int mid=(L+R)>>1;
    tree[root]=max(build(L,mid,root<<1),build(mid+1,R,(root<<1)+1));
    return tree[root];
}

int query(int L,int R,int root,int ql,int qr)
{
    if(ql<=L&&qr>=R)
    {
        return tree[root];
    }
    if(qr<L||ql>R)
    {
        return -2147483648;
    }
    long long mid=(L+R)>>1;
    return max(query(L,mid,root<<1,ql,qr),query(mid+1,R,(root<<1)+1,ql,qr));
}

int update(int L,int R,int root,int p,int val)
{
        if(L==R)
        {
            tree[root]=val;
            return tree[root];
        }
        long long mid=(L+R)>>1;
        if(mid>=p)
        {
            update(L,mid,root<<1,p,val);
        }
        else
        {
            update(mid+1,R,(root<<1)+1,p,val);
        }
        tree[root]=max(tree[root<<1],tree[(root<<1)+1]);
        return tree[root];
}
    
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        cin>>arr[i];
        //arr[i]>>=1;
    }
    build(1,n,1);
    
    cin>>m;
    char ac;
    int a,b;
    for(int i=0 ; i<m ; i++)
    {
        cin>>ac>>a>>b;
        if(ac=='C')
        {
            //b>>=1;
            update(1,n,1,a,b);
        }
        else if(ac=='Q')
        {
        	//cout<<(query(1,n,1,a,b))<<"\n";
            cout<<(query(1,n,1,a,b)/2)<<"\n";
        }
    }

 return 0 ;
}
