#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num=2;
	int arr[num+1];
	for(int i=0 ; i<=num ; i++)
	{
		arr[i]=0;
	}
	while(n>0)
	{
		if(n%num==0)
		{
			arr[num]++;
			n/=num;
		}
		else
		{
			num++;
		}
	}
	bool YN=1;
	for(int i=2 ; i<n ; i++)
	{
		if(arr[i]==1)
		{
			if(YN)
			{
				cout<<i;
				YN=0;
			}
			else
			{
				cout<<" * "<<i;
							cout<<"running..."<<endl;
			}
		}
		else if(arr[i]>1)
		{
			cout<<i<<"^"<<arr[i];
		}
	}
	cout<<endl;

 return 0 ;
}

