#include<iostream>
using namespace std;
unsigned long long arr[101][101];
int main() {
	
	for(int n=1 ; n<101 ; n++)
	{
		for(int m=1 ; m<101 ; m++)
		{
			unsigned long long ans=1;
			ans*=(m+1);
			for(int k=m+2,t=1 ; k<=n ; k++,t++)
			{
				
				ans/=t;
				ans*=k;
			}
			arr[n][m]=ans;
		}
	}
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		cout<<n<<" things taken "<<m<<" at a time is "<<arr[n][m]<<" exactly.\n";
	}

	return 0;
}
