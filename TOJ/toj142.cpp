#include<iostream>
using namespace std;
int main()
{
	char arr[3];
	char brr[3];
	char crr[3];
	for(int i=0 ; i<3 ; i++)
	{
		cin>>arr[i];
	}
	for(int i=0 ; i<3 ; i++)
	{
		cin>>brr[i];
	}
	for(int i=0 ; i<3 ; i++)
	{
		cin>>crr[i];
	}
	
	for(int i=0 ; i<3 ; i++)//直的 
	{
		if(arr[i]==brr[i]&&arr[i]==crr[i])
		{
			if(arr[i]=='O')
			{
				cout<<"A wins."<<endl;
				return 0;	
			}
			if(arr[i]=='X')
			{
				cout<<"B wins."<<endl;
				return 0;
			}
			
		}

	}
//橫的 

	if(arr[0]==arr[1]&&arr[0]==arr[2])
	{
		if(arr[0]=='O')
		{
			cout<<"A wins."<<endl;
			return 0;
		}
		if(arr[0]=='X')
		{
			cout<<"B wins."<<endl;
			return 0;
		}
	}
	if(brr[0]==brr[1]&&brr[0]==brr[2])
	{
		if(brr[0]=='O')
		{
			cout<<"A wins."<<endl;
			return 0;
		}
		if(brr[0]=='X')
		{
			cout<<"B wins."<<endl;
			return 0;
		}
	}
	if(crr[0]==crr[1]&&crr[0]==crr[2])
	{
		if(crr[0]=='O')
		{
			cout<<"A wins."<<endl;
			return 0;
		}
		if(crr[0]=='X')
		{
			cout<<"B wins."<<endl;
			return 0;
		}
	}
	//斜的 
	if(arr[0]==brr[1]&&arr[0]==crr[2])
	{
		if (arr[0]=='O')
		{
			cout<<"A wins."<<endl;
			return 0;
		}
		if (arr[0]=='X')
		{
			cout<<"B wins."<<endl;
			return 0;
		}
		
	}
	if(arr[2]==brr[1]&&arr[2]==crr[0])
	{
		if (arr[2]=='O')
		{
			cout<<"A wins."<<endl;
			return 0;
		}
		if (arr[2]=='X')
		{
			cout<<"B wins."<<endl;
			return 0;
		}
		
	}
	int t=0;
	for(int i=0 ; i<3 ; i++)
	{
		if(arr[i]=='#')
		{
			t=1;	
		}
		if(brr[i]=='#')
		{
			t=1;	
		}
		if(crr[i]=='#')
		{
			t=1;	
		}
	}
	if(t==1)
	{
		cout<<"Playing"<<endl;
	}
	else
	{
		cout<<"Draw"<<endl;
	}
	
	




 return 0 ;
 
}



