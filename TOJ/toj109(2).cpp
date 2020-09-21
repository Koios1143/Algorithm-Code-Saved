#include<iostream>
using namespace std;
int main()
{
	int n,x=0;
	cin>>n; 
	for(int i=0,a,b ; i<n ; i++)
	{
		cin>>a>>b;
		if((a==0&&b==2)||(a==2&&b==5)||(a==5&&b==0))
		{
			x++;
		}
		else if((b==0&&a==2)||(b==2&&a==5)||(b==5&&a==0))
		{
			x--;
		}
		else
		{
			continue;
		}
	}
	if(x>0)
	{
		cout<<"The prince wins."<<endl;
	}
	else if(x<0)
	{
		cout<<"The princess wins."<<endl;
	}
	else
	{
		cout<<"The referee wins."<<endl;
	}


 return 0 ;
}

