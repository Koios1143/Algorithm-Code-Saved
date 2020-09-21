#include<iostream>
#include<cmath>
#define int long long
using namespace std;
const int  Max=1e5+10;
int arr[Max];
struct segment{
	long long sum;
	bool tag;
	segment() : sum(0),tag(false){};
}seg[Max<<2];

inline void pull_up(int root)
{
	seg[root].sum=seg[root<<1].sum+seg[root<<1|1].sum;
	seg[root].tag=seg[root<<1].tag&&seg[root<<1|1].tag;
	return;
}


void build(int L,int R,int root)
{
	if(L==R)
	{
		seg[root].sum=arr[L];
		seg[root].tag=seg[root].sum<=1 ? true : false;
		return;
	}
	int mid=(L+R)>>1;
	build(L,mid,root<<1);
	build(mid+1,R,root<<1|1);
	pull_up(root);
	return;
}

long long update(int L,int R,int root,int pl,int pr)
{
	if(pl>R || pr<L)
	{
		return 0;
	}
	if(L==R)
	{
		seg[root].sum=(int)sqrt(seg[root].sum);
		seg[root].tag=seg[root].sum<=1 ? true : false;
		return seg[root].sum;
	}
	int mid=(L+R)>>1;
	seg[root].sum=(seg[root<<1].tag ? seg[root<<1].sum : update(L,mid,root<<1,pl,pr))+(seg[root<<1|1].tag ? seg[root<<1|1].sum : update(mid+1,R,root<<1|1,pl,pr));
	pull_up(root);
	return seg[root].sum;
}

/*void updateS(int L,int R,int root,int px)
{
	if(L==R)
	{
		if(seg[root].sum>1)
			seg[root].sum=(int)sqrt(seg[root].sum);
		return;
	}
	int mid=(L+R)>>1;
	if(px<=mid)
	{
		updateS(L,mid,root<<1,px);
	}
	else
	{
		updateS(mid+1,R,root<<1|1,px);
	}
	pull_up(root);
	return;
}*/ 

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

signed main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	int n,q;
	int cmd,x,y;
	int times=0;
	while(cin>>n)
	{
		times++;
		cout<<"Case #"<<times<<":\n";
		
		for(int i=1 ; i<=n ; i++)
		{
			cin>>arr[i];
		}
		build(1,n,1);
		cin>>q;
		for(int i=0 ; i<q ; i++)
		{
			cin>>cmd>>x>>y;
			if(x>y)
				swap(x,y); 
			if(!cmd)
			{
				update(1,n,1,x,y);
				/*for(int j=x ; j<=y ; j++)
				{
					updateS(1,n,1,j);
				}*/
			}
			else
			{
				cout<<query(1,n,1,x,y)<<"\n";
			}
		}
		cout<<"\n";
	}


 return 0 ;
}

