#include<iostream>
using namespace std;
int main()
{
	char arr[9];
	int o=0,x=0;
	bool flag=1;
	for(int i=0 ; i<9 ; i++)
	{
		cin>>arr[i];
		if(arr[i]=='O')
		{
			o++;
		}
		else if(arr[i]=='X')
		{
			x++;
		}
		else if(arr[i]=='.')
		{
			continue;
		}
		else
		{
			flag=0;
		}
	}
	
	if(x==o||o-x==1&&flag==1)
	{
		cout<<"POSSIBLE"<<endl;
	}
	else
	{
		cout<<"IMPOSSIBLE"<<endl;
	}
	


 return 0 ;
}

