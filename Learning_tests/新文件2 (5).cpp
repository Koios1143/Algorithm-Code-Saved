#include<iostream>
using namespace std;
bool N(int (*ptr)[2],int a)
{
	
}
int main()
{
	
	int arr[3][2]={{1,2},{1,2},{3,4}};
	int (*ptr)[2]=arr;
	*(ptr[1]+1)=15;
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			cout<<*(ptr[i]+j)<<endl;
		}
	}
	N(arr,1);

 return 0 ;
}

