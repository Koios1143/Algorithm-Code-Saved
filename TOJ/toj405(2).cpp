#include<iostream>
#include<cmath>
#include<sstream>
#include<stdio.h>
using namespace std;
int digits(int n)
{
	stringstream ss;
	ss<<n;
	string str;
	ss>>str;
	ss.clear();
	return str.length();
}
int main()
{
	int b,N;
	scanf("%d %d",&b,&N);
	int num=0,num2=0;
	for(int i=0,space=digits(N) ; i<space ; i++)
	{
		num2+=N%10*(pow(b,i));
		num+=pow((N%10),space);	
		N/=10;
	}
	if(num2==num)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

 return 0 ;
}

