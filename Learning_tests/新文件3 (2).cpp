#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[10000];
	for(int i=10000 ; i>=0 ; i--)
	{
		arr[i]=i;
	}
	sort(arr,arr+10000);
	for(int i=0 ; i<10000 ; i++)
	{
		cout<<arr[i]<<" ";
	}

 return 0 ;
}

