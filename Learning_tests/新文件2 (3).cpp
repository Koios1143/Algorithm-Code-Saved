#include<iostream>
using namespace std;
int p[10000005];
void set()
{
	p[0]=1;
	p[1]=1;
	for(long long i=2 ; i<=10000005 ; i++)
	{
		if(!p[i])
		{
			for(long long j=i*i ; j<=10000005 ; j+=i)
			{
				if(!p[j])
				{
					p[j]=i;
				}
			}
			p[i]=i;
		}
	}
}
int main()
{
	ste();
	cout<<p[10]<<endl;

 return 0 ;
}

