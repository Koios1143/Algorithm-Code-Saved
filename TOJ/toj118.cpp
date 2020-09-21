#include<iostream>
using namespace std;
	int arr[1005][1005];
	int brr[1005][1005];

int main()
{
	int n;
	cin>>n;
	int space;

	for(int i=0 , j=0; i<n ; i++)
	{
		j=0;
		cin>>arr[i][j];
		space=arr[i][j];
		j++;
		cin>>arr[i][j];
		arr[i][j]*=space;
	}
	int m;
	cin>>m;
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			cin>>brr[j][i];
			if(brr[j][i]==arr[j][i])
			{
				cout<<"The shopkeeper is honest."<<endl;
			}
			else
			{
				cout<<arr[j][i]-brr[j][i];
			}
		}
	}
	


 return 0 ;
 
}



