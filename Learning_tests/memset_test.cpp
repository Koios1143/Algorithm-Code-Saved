#include<iostream>
#include"memory.h"
using namespace std;
int main()
{
	int arr[100];
	memset(arr,100,sizeof(arr));
	for(int i=0 ; i<100 ; i++)
	{
		cout<<arr[i]<<endl;
	}


 return 0 ;
}

