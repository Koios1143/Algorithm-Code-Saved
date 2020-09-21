#include<iostream>
#include<vector>
using namespace std;

//int tree[10000000];
//int  arr[10000000];
vector<int> tree;
vector<int> arr;

int build(int l,int r,int root)
{
	if(l==r)
	{
		tree[root]=arr[l];
		return tree[root];
	}
	int mid=(l+r)/2;
	tree[root]=max(build(l,mid,root*2),build(mid+1,r,root*2+1));
	return tree[root];
}

int query(int l,int r,int root,int ql,int qr)
{
	if(l<=ql&&r>=qr)
	{
		return tree[root];
	}
	if(qr<l||ql>r)
	{
		return -10000;
	}
	int mid=(l+r)/2;
	return max(query(l,mid,root*2,ql,qr),query(mid+1,r,root*2+1,ql,qr));
}

/*int update(int l,int r,int root,int p,int val)
{
	if(l==r)
	{
		tree[root]=val;
		return tree[root];
	}
	
}*/

int main()
{
	tree.resize(10000000);
	arr.resize(10000000);
	
	int n,m;
	cin>>n>>m;
	for(int i=1 ; i<=n ; i++)
	{
		cin>>arr[i];
	}
	string command;
	if(command=="INSERT")
	{
		int p,k;
		cin>>p>>k;
		
	}
	else if(command=="DELETE")
	{
		
	}
	else if(command=="MAKE-SAME")
	{
		
	}
	else if(command=="REVERSE")
	{
		
	}
	else if(command=="GET-SUM")
	{
		
	}
	else if(command=="MAX-SUM")
	{
		
	}

 return 0 ;
}

