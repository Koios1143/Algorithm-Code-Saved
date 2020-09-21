#include<iostream>
using namespace std;
int main()
{
	int arr[10][10];
	arr[0][0]=12;
	int brr[10][10];
	brr[0][0]=12;
	if(arr[0][0]==brr[0][0])
	{
		cout<<"="<<endl;
	}
	else
	{
		cout<<"x"<<endl; 
	}
	int a=1;
	int b=2;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;


 return 0 ;
 
}



