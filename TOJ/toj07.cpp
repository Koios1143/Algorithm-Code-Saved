#include<iostream>
using namespace std;
int main()
{
	int start;
	cin>>start;
	int n;
	int arr[100];
	for(int i=0 ; i<start ; i++)
	{
		cin>>n;
		for(int j=0 ; j<n+1 ; j++)
		{
			cin>>arr[j];
		}
		if(n==2) cout<<arr[1]-arr[0]<<endl;
		else cout<<0<<endl;
	}


 return 0 ;
 
}



