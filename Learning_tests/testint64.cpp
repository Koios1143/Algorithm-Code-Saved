#include<iostream>
using namespace std;
int main()
{
	uint64_t a;
	int m,b;
	cin>>a>>m>>b;
	char mut;
	unsigned int n;
	for(int i=0 ; i<m ; i++)
	{
		cin>>n;
		cin>>mut;
		if(mut=='*') a*=n;
		else if(mut=='/') a/=n;
		else if(mut=='+') a+=n;
		else if(mut=='-') a-=n;
	}
	cout<<a%b<<endl;
	
	


 return 0 ;
 
}



