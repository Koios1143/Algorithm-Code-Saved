#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1 ; i<=n ; i++)
	{
		cin>>arr[i];
	}
	int q;
	cin>>q;
	for(int i=0,a1,b1,total=0 ; i<q ; i++)
	{
		total=0;
		cin>>a1>>b1;
		for(int j=a1 ; j<=b1 ; j++)
		{
			total+=arr[j];
		}
		cout<<total<<endl;
	}


 return 0 ;
}

