#include<iostream>
#include<algorithm>
using namespace std;
int arr[105];
int brr[30005];
int main()
{
	int n,q;
	cin>>n>>q;
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	sort(arr , arr+n);
	for(int i=0 ; i<q ; i++)
	{
		cin>>brr[i];
		for(int j=0 ; j<n ; j++)
		{
			if(brr[i]==arr[0]+arr[1] || brr[i]==arr[1]-arr[0] || brr[i]==arr[0]-arr[1])
			{
				cout<<brr[i]<<endl;
				break;
			}
			else if(brr[i]==arr[0])
			{
				cout<<brr[i]+arr[1]<<endl;
			}
			else if(brr[i]==arr[1])
			{
				cout<<brr[i]+arr[0]<<endl;
			}
		}
	}
	


 return 0 ;
 
}



