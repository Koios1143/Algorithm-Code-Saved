#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[100010];
	long long n,k,p=0;
	cin>>n>>k;
	for(int i=0 ; i<n ; i++)
		cin>>arr[i];
	sort(arr,arr+n);
	long long ans=0,sum=arr[0];
	for(int i=0 ; i<n ; i++)
	{
		if(p<i)
		{
			p=i;
			sum=arr[i];
		}
		while(p+1<n&&arr[p+1]-arr[i]<=k)
		{
			p++;
			sum+=arr[p];
		}
		ans=max(ans,sum);
		sum-=arr[i];
	}
	cout<<ans<<"\n";
 return 0 ;
}
