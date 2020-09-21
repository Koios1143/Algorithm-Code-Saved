#include<iostream>
using namespace std;
int arr[101][101];
long long DP(int a,int b)
{
	if(arr[a][b])
	{
		return arr[a][b];
	}
	if(a<b)
	{
		arr[a][b]=0;
		return 0;
	}
	else if(b==1)
	{
		arr[a][b]=a;
		return a;
	}
	else
	{
		arr[a-1][b-1]=DP(a-1,b-1);
		arr[a-1][b]=DP(a-1,b);
		return arr[a-1][b-1]+arr[a-1][b];
	}
}
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
		{
			break;
		}
		else
		{
			long long C=DP(n,m);
			cout<<n<<" things taken "<<m<<" at a time is "<<C<<" exactly."<<endl;
		}
	}

 return 0 ;
}

