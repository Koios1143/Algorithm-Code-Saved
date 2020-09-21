#include<iostream>
#define int long long
using namespace std;
const int Max=2e5+10;
int arr[Max];

struct segment{
	int sum=0;
}seg[Max<<2];



inline void pull(int root)
{
	seg[root].sum=max(seg[root<<1].sum,seg[root<<1|1].sum);
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

void update(int l,int r,int root,int px,int val)
{
	if(l==r)
	{
		seg[root].sum=val;
		return;
	}
	int mid=(l+r)>>1;
	if(px<=mid)
	{
		update(l,mid,root<<1,px,val);
	}
	else
	{
		update(mid+1,r,root<<1|1,px,val);
	}
	pull(root);
	return;
}

int query(int l,int r,int root,int ql,int qr)
{
	if(ql>r || qr<l)
	{
		return -2147483647;
	}
	if(ql<=l && qr>=r)
	{
		return seg[root].sum;
	}
	int mid=(l+r)>>1;
	return max(query(l,mid,root<<1,ql,qr),query(mid+1,r,root<<1|1,ql,qr));
}

signed main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	int n,m;
	while(cin>>n>>m)
	{
		for(int i=1 ; i<=n ; i++)
		{
			cin>>arr[i];
		}
		build(1,n,1);
		char cmd;
		int x,y;
		for(int i=0 ; i<m ; i++)
		{
			cin>>cmd>>x>>y;
			if(cmd=='Q')
			{
				cout<<query(1,n,1,x,y)<<"\n";
			}
			else
			{
				update(1,n,1,x,y);
			}
		}
	}
	
	


 return 0 ;
}

