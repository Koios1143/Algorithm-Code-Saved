#include<iostream>
using namespace std;
int main()
{
	string arr[10];
	for(int i=0 ; i<10 ; i++)
	{
		arr[i]="EMPTY";
	}
	int n;
	cin>>n;
	string s;
	int b;
	for(int i=0 ; i<n ; i++)
	{
		cin>>s>>b;
		arr[b-1]=s;
	}
	for(int i=0 ; i<10 ; i++)
	{
		cout<<arr[i]<<endl;
	}


 return 0 ;
 
}



