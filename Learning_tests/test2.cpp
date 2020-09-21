#include<iostream>
using namespace std;
int main()
{
	long long n=1;
	for(int i=2 ; i<=25 ; i++)
	{
		cout<<i<<":"<<n*i<<endl;
		n*=i;
	}


 return 0 ;
}

