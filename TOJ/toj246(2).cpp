#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	unsigned int m,b,n;
	string a;
	char c;
	int arr[25];
	cin>>a>>m>>b;
	unsigned int a2=0;
	
	for(int i=0 ; i<m ; i++)
	{
		cin>>n>>c;
		arr[i]=n%b;
	}
	arr[m]=a%b;
	sort(arr,arr+m);
	cout<<arr[0]<<endl;
	
 return 0 ;
}

