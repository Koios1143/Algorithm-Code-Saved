#include <iostream>
#include <memory.h>
using namespace std;

int tree[500050];
int  arr[50005];
int build(int l,int r,int root)
{
	if(l==r)
	{
		tree[root]=arr[l];
		return tree[root];
	}
	int mid=(l+r)>>1;
	tree[root]=build(l,mid,root<<1)+build(mid+1,r,(root<<1)+1);
	return tree[root];
}

void build2(int l,int r,int root)
{
	if(l==r)
	{
		tree[root]=arr[l];
	}
	int mid=(l+r)>>1;
	tree[root]=build(l,mid,root<<1)+build(mid+1,r,root<<1+1);
}

int query(int l,int r,int root,int ql,int qr)
{
	//cout<<"l:"<<l<<" r:"<<r<<" root:"<<root<<" ql:"<<ql<<" qr:"<<qr<<"\n";
	if(ql<=l&&qr>=r)
	{
		return tree[root];
	}
	if(l>qr||r<ql)
	{
		return 0;
	}
	int mid=(l+r)>>1;
	
	return query(l,mid,root<<1,ql,qr)+query(mid+1,r,(root<<1)+1,ql,qr);
}
int update(int l,int r,int root,int p,int val,bool ps)//ps: true + : -
{
	if(l==r)
	{
		//cout<<l<<"=="<<r<<"\n";
		if(ps)
			tree[root]+=val;
		else
			tree[root]-=val;
		//cout<<"tree[root]="<<tree[root]<<"\n";
		return tree[root];
	}
	int mid=(l+r)>>1;
	if(mid>=p)
	{
		update(l,mid,root<<1,p,val,ps);
	}
	else
	{
		update(mid+1,r,(root<<1)+1,p,val,ps);
	}
	//cout<<"tree[root]="<<tree[root<<1]<<"+"<<tree[(root<<1)+1]<<'\n';
	tree[root]=tree[root<<1]+tree[(root<<1)+1];
	return tree[root];
}


int main() {
	ios::sync_with_stdio ( false );
	cin.tie(0);
	
	int t;
	cin>>t;
	int n;
	for(int ti=1 ; ti<=t ; ti++)
	{
		memset(arr,0,sizeof(arr));
		memset(tree,0,sizeof(tree));
		cout<<"Case "<<ti<<":\n";
		cin>>n;
		for(int i=1 ; i<=n ; i++)
		{
			cin>>arr[i];
		}
		build(1,n,1);
		string command;
		while(cin>>command)
		{
			if(command=="End")
				return 0;
			
			int a,b;
			cin>>a>>b;
			if(command=="Query")
			{
				cout<<query(1,n,1,a,b)<<"\n";
			}
			else if(command=="Add")
			{
				update(1,n,1,a,b,true);
			}
			else if(command=="Sub")
			{
				update(1,n,1,a,b,false);
			}
		}
	}
	
	return 0;
}
