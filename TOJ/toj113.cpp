#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	string P;
	cin>>P;
	
	char LR;
	cin>>LR;
	
	int flag=0;
	for(int i=0 ; i<n ; i++)
	{
		if(P[i]=='P')
		{
			flag=i;
			break;
		}
	}
	
	if(LR=='L')
	{
		swap(P[flag],P[flag-1]);
	}
	else
	{
		swap(P[flag],P[flag+1]);
	}
	
	for(int i=0 ; i<n ; i++)
	{
		cout<<P[i];
	}
	cout<<endl;

 return 0 ;
 
}



