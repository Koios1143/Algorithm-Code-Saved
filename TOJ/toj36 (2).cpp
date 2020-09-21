#include<iostream>
using namespace std;
int main()
{
	unsigned int a,b,a2;
	short c;
	cin>>a>>b>>c;
	a2=a;
	for(int i=0 ; i<b-1 ; i++)
	{
		if(a>c)
		{
			a=a%c;
		}
		a=a*(a2%c);
	}
	a%=c;
	cout<<a<<endl;

 return 0 ;
}

