#include<iostream>
using namespace std;
int main()
{
	char num[101];
	int a,i=0;
	while(cin>>a)
	{
		num[i]=a;
		i++;
	}
	bool YN=false;
	while(num>0)
	{
		int a=num%10;
		num/=10;
		if(a==2||a==3||a==5||a==7)
		{
			YN=true;
		}
		else
		{
			YN=false;
			break;
		}
	}
	if(YN)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}


 return 0 ;
}

