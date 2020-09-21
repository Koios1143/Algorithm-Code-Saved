#include<iostream>
#include<stack>
using namespace std;
bool visted[14];
int arr[14];
int k=0;
void dfs(int now,int times)
{
	if(times>6||now+(6-times)<6)
		return;
	visted[now]=true;
	for(int i=now ; i<k ; i++)
	{
		if(!visted[i])
		{
			cout<<arr[i];
			if(times==6)
			{
				cout<<"\n";
			}
			else
			{
				cout<<" ";
			}
			dfs(i,(times+1));
		}	
	}
}
int main()
{
	//int k;
	while(cin>>k)
	{
		if(k==0)
			break;
		for(int i=0 ; i<14 ; i++)
		{
			visted[i]=false;
			arr[i]=0;
		}
		for(int i=0  ;i<k ; i++)
		{
			cin>>arr[i];
		}
		for(int i=0 ; i<=k ; i++)
		{
			dfs(arr[i],0);
		}
	}


 return 0 ;
}

