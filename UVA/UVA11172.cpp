#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	long long a,b;
	for(int i=0 ; i<n ; i++)
	{
		scanf("%lld%lld",&a,&b);
		if(a==b)
		{
			printf("=\n");
		}
		else if(a>b)
		{
			printf(">\n");
		}
		else
		{
			printf("<\n");
		}
	}


 return 0 ;
}

