#include<iostream>
using namespace std;
const int Max=5e4+10;
struct segment{
	int sum=0;
}seg[Max<<2];
int arr[Max];

inline void pull(int root)//向上更新 
{
	seg[root].sum=seg[root<<1].sum+seg[root<<1|1].sum;
	return;
}

void build(int l,int r,int root)//建立segment tree 
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

int query(int l,int r,int root,int ql,int qr)//查詢區間總和 
{
	if(ql>r||qr<l)//out of range
	{
		return 0;
	}
	if(ql<=l&&qr>=r)//l~r is in ql~qr
	{
		return seg[root].sum;
	}
	int mid=(l+r)>>1;
	return query(l,mid,root<<1,ql,qr)+query(mid+1,r,root<<1|1,ql,qr);
}

void update(int l,int r,int root,int px,int val)
{
	if(l==r)
	{
		seg[root].sum+=val;
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
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin>>t;
	for(int times=1 ; times<=t ; times++)
	{
		cout<<"Case "<<times<<":\n";
		int n;
		cin>>n;
		for(int i=1 ; i<=n ; i++)
		{
			cin>>arr[i];
		}
		build(1,n,1);
		string cmd;
		int x,y;
		while(cin>>cmd && cmd[0]!='E')
		{
			cin>>x>>y;
			if(cmd[0]=='Q')
			{
				cout<<query(1,n,1,x,y)<<"\n";
			}
			else if(cmd[0]=='A')
			{
				update(1,n,1,x,y);
			}
			else
			{
				update(1,n,1,x,(-1)*y);
			}
		}
	}
	
	


 return 0 ;
}

