#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	int a,b;
	for(int times=0 ; times<T ; times++)
	{
		cin>>a>>b;
		{
			while((a%=b)&&(b%=a));
			cout<<a+b<<endl;
		}
	}
 return 0 ;
}
