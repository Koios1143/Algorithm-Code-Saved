#include<iostream>
using namespace std;
int N,M;
int arr[1002][1002];
bool DP(int arr[][1002],int px,int py)
{
	if(arr[py-1][px]==4)//left
	{
		return true;
	}
	else if(arr[py-1][px]==0)
	{
		arr[py-1][px]=3;
		if(DP(arr,px,py-1))
		{
			return true;
		}
	}
	else
	{
		
	}
	
	if(arr[py+1][px]==4)//right
	{
		return true;
	}
	else if(arr[py+1][px]==0)
	{
		arr[py+1][px]=3;
		if(DP(arr,px,py+1))
		{
			return true;
		}
	}
	else
	{
		
	}
	
	if(arr[py][px-1]==4)//above
	{
		return true;
	}
	else if(arr[py][px-1]==0)
	{
		arr[py][px-1]=3;
		if(DP(arr,px-1,py))
		{
			return true;
		}
	}
	else
	{
		
	}
	
	if(arr[py][px+1]==4)//below
	{
		return true;
	}
	else if(arr[py][px+1]==0)
	{
		arr[py][px+1]=3;
		if(DP(arr,px+1,py))
		{
			return true;
		}
	}
	else
	{
		
	}
	return false;
} 
int main()
{
	cin>>M>>N;
	for(int i=0 ; i<N+2 ; i++)
	{
		arr[i][0]=3;
		arr[i][M+1]=3;
	}
	for(int i=1 ; i<M+1 ; i++)
	{
		arr[0][i]=3;
		arr[N+1][i]=3;
	}
	int Xme,Yme;
	cin>>Xme>>Yme;
	arr[Yme][Xme]=1;
	int u,v;
	cin>>u>>v;
	arr[v][u]=4;
	int F;
	cin>>F;
	for(int i=0,xd,yd ; i<F ; i++)
	{
		cin>>xd>>yd;
		arr[yd][xd]=2;
	}
	if(DP(arr,Xme,Yme))
	{
	 	cout<<"Cool!"<<endl;
	}
	else
	{
	 	cout<<"Harakiri!"<<endl;
	}

 return 0 ;
}

