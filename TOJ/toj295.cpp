#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long a[10005];
	for(int i=0 ; i<n ; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	if(a[0]==a[n-1]&&a[0]==1)
	{
		a[n-1]=2;
	}
	else
	{
		a[n-1]=1;
		sort(a,a+n);
	}
	
	for(int i=0 ; i<n ; i++)
	{
		cout<<a[i];
		if(i<n-1) cout<<" ";
	}
	cout<<endl;

 return 0 ;
 
}



