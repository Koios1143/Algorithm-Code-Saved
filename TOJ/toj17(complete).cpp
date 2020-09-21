#include<iostream>
using namespace std;
void forward(int high)
{
	for(int line=0 , space=high-1 ; line<high ; line++)//«e(high+1)/2 
	{
		for(int n=space ; n>0 ; n--)
		{
			cout<<" ";
		}
		space--;
		for(int forward=1 ; forward<=line ; forward++)
		{
			cout<<(char)(forward+64);
		}
		cout<<(char)(line+1+64);
		for(int back=line ; back>0 ; back--)
		{
			cout<<(char)(back+64);
		}
		cout<<endl;
		}
}
void back(int high)
{
	for(int line=high , space=1 ; line>0 ; line--)
	{
		for(int n=space ; n>0 ; n--)
		{
			cout<<" ";
		}
		space++;
		for(int forward=1 ; forward<line ; forward++)
		{
			cout<<(char)(forward+64);
		}
		cout<<(char)(line+64);
		for(int back=line-1 ; back>0 ; back--)
		{
			cout<<(char)(back+64);
		}
		cout<<endl; 
		}
}
int main()
{
	int high;
	while(cin>>high)//high*2-1 lines
	{
		forward(high);
		back(high-1);
	}
	


 return 0 ;
 
}



