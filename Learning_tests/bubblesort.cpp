#include<iostream>
using namespace std;
int main()
//�Ѥp��j�Ƨ� 
{
	int n;
	cin>>n;
	int arr[100];
	int space=0;
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	for(int j=0 ; j<(n-1) ; j++)
	{
		for(int k=0 ; k<(n-1) ; k++)
		{
			if(arr[k]>arr[k+1])
			{
				space=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=space;
			}
		}
	}
	for(int l=0 ; l<n ; l++)
	{
		cout<<arr[l]<<" ";
	}


 return 0 ;
 
}



