#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0 ; i<n+1 ; i++)
	{
		arr[i]=0;
	}
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
		sort(arr,arr+i+1);
		if((i+1)%2)
		{
			cout<<fixed<<setprecision(6)<<(double)arr[i/2]<<endl;
		}
		else
		{
			//cout<<i/2<<" "<<arr[i/2]<<endl;
			//cout<<(i+1)/2<<" "<<arr[(i+1)/2]<<endl;
			cout<<fixed<<setprecision(6)<<(arr[i/2]+arr[(i+1)/2])/2.0<<endl;
		}
	}


 return 0 ;
}

