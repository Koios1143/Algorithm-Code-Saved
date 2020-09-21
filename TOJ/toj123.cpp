#include<iostream>
using namespace std;
char arr[100000];
char brr[100000];
int main()
{
	long long n;
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		cin>>brr[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]=='0'&& (brr[i-1]=='0' || brr[i]=='0' || brr[i+1]=='0' ) )
		{
			cout<<"FENESTRATION FORTIFICATION FAILURE!"<<endl;
			return 0;
		}
	}
	cout<<"FENDED OFF!"<<endl;


 return 0 ;
 
}



