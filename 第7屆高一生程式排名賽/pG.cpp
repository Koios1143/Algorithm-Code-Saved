#include<iostream>
using namespace std;
int ans[1000010],moves[1000010],tag[1000010];
//use moves save all query
//use tag save query to where
int main()
{
	int n,q,c=0,d=2147483647;
	//c save whose move now ; d save change creeper
	cin>>n;
	for(int i=1 ; i<=n ; i++)
	{
		cin>>ans[i];
	}
	cin>>q;
	for(int i=1,a,b ; i<=q ; i++)
	{
		cin>>a>>b;
		moves[a]=b;
		tag[a]=q-i+1;//update to where
	}
	for(int i=n ; i>0 ; i--)
	{
		if(moves[i]>0&&tag[i]<d)//change creeper
		{
			c=moves[i];
			d=tag[i];
		}
		if(c>0)//keep update
			ans[i]=c;
	}
	for(int i=1 ; i<=n ; i++)
	{
		if(i>1)
			cout<<' ';
		cout<<ans[i];
	}
	cout<<"\n";
 return 0 ;
}
