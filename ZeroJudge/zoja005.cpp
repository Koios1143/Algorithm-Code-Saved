#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0 ; i<t ; i++)
	{
		int arr[5];
		cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
		if((arr[1]-arr[0])==(arr[2]-arr[1])&&(arr[1]-arr[0])==(arr[3]-arr[2]))
		{
			arr[4]=arr[3]+arr[3]-arr[2];
			for(int j=0 ; j<5 ; j++)
			{
				cout<<arr[j];
				if(j!=4)
				{
					cout<<" ";
				}
			}
			cout<<endl;
		}
		else
		{
			arr[4]=arr[3]*(arr[3]/arr[2]);
			for(int j=0 ; j<5 ; j++)
			{
				cout<<arr[j];
				if(j!=4)
				{
					cout<<" ";
				}
			}
			cout<<endl;
		}
	}

 return 0 ;
}

