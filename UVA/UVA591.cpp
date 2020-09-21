#include<iostream>
using namespace std;
int main()
{
	int n;
	int times=1;
	while(cin>>n)
	{
		if(n==0)
			break;
		int arr[n];
		int tot=0;
		for(int i=0 ; i<n ; i++)
		{
			cin>>arr[i];
			tot+=arr[i];
		}
		//cout<<tot<<" ";
		tot/=n;
		//cout<<tot<<"\n";
		int ans=0;
		for(int i=0 ; i<n ; i++)
		{
			if(arr[i]<tot)
			{
				ans+=tot-arr[i];
			}
		}
		cout<<"Set #"<<times<<"\n";
		cout<<"The minimum number of moves is "<<ans<<".\n\n";
		times++;
	}


 return 0 ;
}

