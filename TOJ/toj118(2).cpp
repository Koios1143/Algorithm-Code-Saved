#include<iostream>
using namespace std;
int arr[1005][1005];
int brr[1005][1005];
int main()
{
	int n;
	cin>>n;
	int a=0;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a;
			cin>>arr[a][0];
			arr[a][0]*=a;
		}
		
	int m;
	cin>>m;
	int b=0;
	for(int i=0 ; i<m ; i++)
	{
		cin>>b;
		cin>>brr[b][0];
		if(arr[b][0]==brr[b][0])
		{
			cout<<"The shopkeeper is honest."<<endl;
		}
		else
		{
			cout<<brr[b][0]-arr[b][0]<<endl;
		}
	}
	
	
		
		


 return 0 ;
 
}



