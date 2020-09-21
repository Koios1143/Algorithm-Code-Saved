#include<iostream>
using namespace std;
int arr[101][101];
bool YN[101][101];
unsigned long long C(int n,int m)
{
	if(n==m)
	{
		return 1;
	}
	if(n<m)
	{
		return 0;
	}
	if(m==1)
	{
		return n;
	}
	return C(n-1,m-1)+C(n-1,m);
}
int main()
{
	for(int i=1 ; i<101 ; i++)
	{
		for(int j=1 ; j<101 ; j++)
		{
			if(i<j)
			{
				break;
			}
			if(!YN[i][i-j])
			{
				system("pause");
				arr[i][j]=C(i,j);
				YN[i][j]=true;
			}
			else
			{
				arr[i][j]=arr[i][i-j];
				YN[i][j]=true;
			}
		}
	}
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		cout<<n<<" things taken "<<m<<" at a time is "<<arr[n][m]<<" exactly.\n";
	}

 return 0 ;
}

