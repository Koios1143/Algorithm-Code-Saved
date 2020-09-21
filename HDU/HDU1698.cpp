#include<iostream>
using namespace std;

const int Max=1e5+10;
long long arr[Max];
struct segment{
	long long sum,tag;
	segment() : sum(0),tag(0) {};
}seg[Max<<2];

inline void pull_up(int root)
{
	seg[root].sum=seg[root<<1].sum+seg[root<<1|1].sum;
	return;
}
inline void push_down(int root,int L,int R)
{
	if(seg[root].tag)
	{
		int mid=(L+R)>>1;
		seg[root<<1].sum=seg[root].tag*(mid-L+1);
		seg[root<<1|1].sum=seg[root].tag*(R-mid);
		seg[root<<1].tag+=seg[root].tag;
		seg[root<<1|1].tag+=seg[root].tag;
		seg[root].tag=0;
	}
}
void build(int L,int R,int root)
{
	if(L==R)
	{
		seg[root].sum=arr[L];
		return;
	}
	int mid=(L+R)>>1;
	build(L,mid,root<<1);
	build(mid+1,R,root<<1|1);
	pull_up(root);
}
void update(int L,int R,int root,int pl,int pr,int val)
{
	if(pl>R || pr<L)
	{
		return;
	}
	if(pl<=L && pr>=R)
	{
		seg[root].tag=val;
		seg[root].sum=val*(R-L+1);
		return;
	}
	int mid=(L+R)>>1;
	push_down(root,L,R);
	update(L,mid,root<<1,pl,pr,val);
	update(mid+1,R,root<<1|1,pl,pr,val);
	pull_up(root);
}
long long query(int L,int R,int root,int ql,int qr)
{
	if(ql>R || qr<L)
	{
		return 0;
	}
	if(ql<=L && qr>=R)
	{
		return seg[root].sum;
	}
	int mid=(L+R)>>1;
	return query(L,mid,root<<1,ql,qr)+query(mid+1,R,root<<1|1,ql,qr);
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	 
	int t;
	cin>>t;
	for(int i=1 ; i<=t ; i++)
	{
		cout<<"Case "<<i<<": The total value of the hook is ";
		int n;
		cin>>n;
		for(int l=1 ; l<=n ; l++)
		{
			arr[l]=1;
		}
		build(1,n,1);
		int q;
		cin>>q;
		long long x,y,z;
		for(int j=0 ; j<q ; j++)
		{
			cin>>x>>y>>z;
			update(1,n,1,x,y,z);
		}
		cout<<query(1,n,1,1,n)<<".\n";
	}


 return 0 ;
}

