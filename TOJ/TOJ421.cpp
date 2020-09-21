#include<iostream>
using namespace std;

long long tree[100000000];
long long  arr[100000000];
long long build(long long L,long long R,long long root)
{
	if(L==R)
	{
		tree[root]=arr[L];
		//cout<<"tree["<<root<<"]="<<tree[root]<<"\n";
		return tree[root];
	}
	int mid=(L+R)/2;
	tree[root]=max(build(L,mid,root*2),build(mid+1,R,root*2+1)); 
	//cout<<"tree["<<root<<"]="<<tree[root]<<"\n";
	return tree[root];
}

long long query(long long L,long long R,long long root,long long ql,long long qr)
{
	//cout<<L<<" "<<R<<" "<<root<<" "<<ql<<" "<<qr<<"\n";
	if(ql<=L&&qr>=R)
	{
		return tree[root];
	}
	if(qr<L||ql>R)
	{
		return -1;
	}
	long long mid=(L+R)/2;
	//cout<<"return max(query("<<L<<","<<mid<<","<<root*2<<","<<ql<<","<<qr<<"),query("<<mid+1<<","<<R<<","<<root*2+1<<","<<ql<<","<<qr<<"))"<<"\n";
	//system("pause");
	return max(query(L,mid,root*2,ql,qr),query(mid+1,R,root*2+1,ql,qr));
}

int main()
{
	long long n,m;
	cin>>n>>m;
	for(long long i=1 ; i<=n ; i++)
	{
		cin>>arr[i];
	}
	build(1,n,1);
	
	for(long long i=0,a,b ; i<m ; i++)
	{
		cin>>a>>b;
		if(a>b)
			swap(a,b);
		cout<<query(1,n,1,a,b)<<"\n";
	}

 return 0 ;
}

