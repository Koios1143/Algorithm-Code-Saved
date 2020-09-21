#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int arr[n+5];
		for(int i=0 ; i<n ; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		if(arr[0]==arr[n-1]&&arr[0]==1)
		{
			arr[n-1]=2;
			cout<<arr[0];
			for(int i=1 ; i<n ; i++)
			{
				
				cout<<" "<<arr[i];
			}
			cout<<endl;
		}
		else
		{
			arr[n-1]=1;
			//sort(arr,arr+n);
			cout<<arr[n-1];
			for(int i=0 ; i<n-1 ; i++)
			{
				cout<<" "<<arr[i];
			}
			cout<<endl;
		}
		
	}


 return 0 ;
}
