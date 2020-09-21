#include<iostream>
using namespace std;
const int Max=1e5+10;
long long arr[Max];
struct segment{
	long long sum,tag;
	segment():sum(0),tag(0){};
}seg[Max<<2];

inline void pull(int root)
{
	seg[root].sum=seg[root<<1].sum+seg[root<<1|1].sum;
	return;
}

inline void push(int root,int l,int r)
{
	if(seg[root].tag)
	{
		int mid=(l+r)>>1;
		seg[root<<1].sum+=seg[root].tag*(mid-l+1);
		seg[root<<1|1].sum+=seg[root].tag*(r-mid);
		seg[root<<1].tag+=seg[root].tag;
		seg[root<<1|1].tag+=seg[root].tag;
		seg[root].tag=0;
	}
	return;
}

void build(int l,int r,int root)
{
	if(l==r)
	{
		seg[root].sum=arr[l];
		return;
	}
	int mid=(l+r)>>1;
	build(l,mid,root<<1);
	build(mid+1,r,root<<1|1);
	pull(root);
	return;
}

void update(int l,int r,int root,int pl,int pr,long long val)
{
	if(pl>r || pr<l)
	{
		return;
	}
	if(pl<=l && pr>=r)
	{
		seg[root].tag+=val;
		seg[root].sum+=val*(r-l+1);
		return;
	}
	int mid=(l+r)>>1; 
	push(root,l,r);
	update(l,mid,root<<1,pl,pr,val);
	update(mid+1,r,root<<1|1,pl,pr,val);
	pull(root);
}

long long query(int l,int r,int root,int ql,int qr)
{
	if(ql>r || qr<l)
	{
		return 0;
	}
	if(ql<=l && qr>=r)
	{
		return seg[root].sum;
	}
	push(root,l,r);
	int mid=(l+r)>>1;
	return 	query(l,mid,root<<1,ql,qr)+query(mid+1,r,root<<1|1,ql,qr);
}


int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	int n,q;
	cin>>n>>q;
	for(int i=1 ; i<=n ; i++)
	{
		cin>>arr[i];
	}
	build(1,n,1);
	char cmd;
	int x,y,z;
	for(int i=0 ; i<q ; i++)
	{
		cin>>cmd;
		if(cmd=='Q')
		{
			cin>>x>>y;
			cout<<query(1,n,1,x,y)<<"\n";
		}
		else
		{
			cin>>x>>y>>z;
			update(1,n,1,x,y,z);
		}
	}


 return 0 ;
}

