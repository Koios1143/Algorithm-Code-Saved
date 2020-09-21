#include<iostream>
using namespace std;
void forward(int high)
{
	for(int line=0 ; line<high ; line++)
	{
		for(int space=0 ; space<high-line-1 ; space++)
		{
			cout<<" ";
		}
		for(int forward=0 ; forward<line ; forward++)
		{
			cout<<(char)(high+64-forward); 
		}
		cout<<(char)(high+64-line);
		for(int back=1 ; back<=line ; back++)
		{
			cout<<(char)(high+64-line+back);
		}
		cout<<endl;
	}
}
void back(int high)
{
	for(int line=0 ; line<high-1 ; line++)
	{
		for(int space=0 ; space<line+1 ; space++)
		{
			cout<<" ";
		}
		for(int forward=0 ; forward<high-2-line ; forward++)
		{
			cout<<(char)(high+64-forward);
		}
		cout<<(char)(2+64+line);
		for(int back=0 ; back<high-2-line ; back++)
		{
			cout<<(char)(2+64+line+1+back);
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	int high;
	for(int i=0 ; i<n ; i++)
	{
		cin>>high;
		forward(high);
		back(high);
	}


 return 0 ;
 
}



