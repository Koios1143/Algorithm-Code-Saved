#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<arr[n-1]<<endl;


 return 0 ;
 
}



