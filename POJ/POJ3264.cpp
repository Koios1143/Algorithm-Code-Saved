#include<iostream>
#include<cmath>
using namespace std;
const int Max=5e4+10;
long long arr[Max];
struct segment{
	long long max,min;
	segment() : max(0),min(0){};
}seg[Max<<2];

inline void pull_up(int root)
{
	seg[root].max=max(seg[root<<1].max,seg[root<<1|1].max);
	seg[root].min=min(seg[root<<1].min,seg[root<<1|1].min);
	return;
}

void build(int L,int R,int root)
{
	//cout<<"root:"<<root<<" L/R:"<<L<<" "<<R<<"\n";
	if(L==R)
	{
		seg[root].max=arr[L];
		seg[root].min=arr[L];
		return;
	}
	int mid=(L+R)>>1;
	build(L,mid,root<<1);
	build(mid+1,R,root<<1|1);
	pull_up(root);
	return;
}

long long queryMax(int L,int R,int root,int ql,int qr)
{
	if(ql>R || qr<L)
	{
		return 0;
	}
	if(ql<=L && qr>=R)
	{
		return seg[root].max;
	}
	int mid=(L+R)>>1;
	return max(queryMax(L,mid,root<<1,ql,qr),queryMax(mid+1,R,root<<1|1,ql,qr));
}

long long queryMin(int L,int R,int root,int ql,int qr)
{
	if(ql>R || qr<L)
	{
		return 2147483647;
	}
	if(ql<=L && qr>=R)
	{
		return seg[root].min;
	}
	int mid=(L+R)>>1;
	return min(queryMin(L,mid,root<<1,ql,qr),queryMin(mid+1,R,root<<1|1,ql,qr));
}

long long dif(long long a,long long b)
{
	return a-b;
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
	/*for(int i=1 ; i<=13 ; i++)
	{
		cout<<"seg["<<i<<"].max="<<seg[i].max<<"\n";
		cout<<"seg["<<i<<"].min="<<seg[i].min<<"\n";
	}*/
	int a,b;
	for(int i=0 ; i<q ; i++)
	{
		cin>>a>>b;
		cout<<dif(queryMax(1,n,1,a,b),queryMin(1,n,1,a,b))<<"\n";
	}


 return 0 ;
}

