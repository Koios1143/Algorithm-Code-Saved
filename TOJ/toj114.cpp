#include<iostream>
using namespace std;
int main()
{
	int arr[5][6];
	int YN=0;
	for(int i=0 ; i<5; i++)
	{
		for(int j=0 ; j<6 ; j++)
		{
			cin>>arr[i][j];
		}
	}
	
	//¾îªº 
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<4 ; j++)
		{
			if(arr[i][j]==arr[i][j+1]&&arr[i][j]==arr[i][j+2])
			{
				YN=1;
			} 
		}
	}
	
	//ª½ªº
	for(int i=0 ; i<6 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			if(arr[j][i]==arr[j+1][i]&&arr[j][i]==arr[j+2][i])
			{
				YN=1;
			}
		}
	 } 
	 
	 if(YN==1)
	 {
	 	cout<<"Yes"<<endl;
	 }
	 else
	 {
	 	cout<<"No"<<endl;
	 }


 return 0 ;
 
}



