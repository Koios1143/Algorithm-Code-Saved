#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int GCD(int a,int b)
{
	if(a<b) swap(a,b);
	if(b==0) return 0;
	if(a%b==0) return b;
	else return GCD(a%b,b);
}
bool MQ(int a , int b)
{
	if(GCD(a,b) == 1)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int main()
{
	int n=1;
	
	while(true)
	{
		cin>>n;
		if(n==0)
		{
			return 0;
		}
		int arr[100];
		for(int i=0 ; i<n ; i++)
		{
			cin>>arr[i];
		}
		int flag=0;
		for(int i=0 ; i<n-1 ; i++)
		{
			for(int j=1 ; j<=n-1 ; j++)
			{
				if(MQ(arr[i],arr[j])==true)
				{
					if(i>j)
					{
						
					}
					else
					{
						flag++;
					}
				}
			}
		}
		
		
		if(flag==0)
		{
			cout<<"No estimate for this data set."<<endl;
		}
		else
		{
			int total=0;
			for(int m=1 ; m<=n-1 ; m++)
			{
				total+= m;
			}
			double ans;
			ans=sqrt((6*total)/flag);
			cout<<fixed<<setprecision(6)<<ans<<endl;
			
		}
		
	}
	


 return 0 ;
 
}



