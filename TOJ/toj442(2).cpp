#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int p[10000005];
void set()
{
	p[0]=1;
	p[1]=1;
	for(long long i=2 ; i<10000005 ; i++)
	{
		if(!p[i])
		{
			for(long long j=i*i ; j<10000005 ; j+=i)
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
	set();
	int times;
	scanf("%d",&times);
	//cin>>times;
	for(int i=0,num ; i<times ; i++)
	{
		scanf("%d",&num);
		//cin>>num;
		if(num==p[num])//is prime
		{
			printf("%d %d\n",1,num);
			//cout<<1<<" "<<num<<endl;
		}
		else
		{
			int space=num;
			vector<int> v;
			while(true)
			{
				if(space==p[space])
				{
					v.push_back(p[space]);
					break;
				}
				else
				{
					v.push_back(p[space]);
					space=space/p[space];
				}
			}
			int size=v.size();
			if(v[0]==v[size-1])
			{
				printf("%d %d\n",1,v[0]);
				//cout<<1<<" "<<v[0]<<endl;
			}
			else
			{
				if(v[size-1-1]==v[size-1])
				{
					int number=v[size-1-1];
					for(int k=size-1-1-1 ; k>=0 ; k--)
					{
						if(v[k]<number)
						{
							number=v[k];
							break;
						}
					}
					printf("%d %d\n",number,v[size-1]);
					//cout<<number<<" "<<v[size-1]<<endl;
				}
				else
				{
					printf("%d %d\n",v[size-1-1],v[size-1]);
					//cout<<v[size-1-1]<<" "<<v[size-1]<<endl;
				}
			}
		}
	}
 return 0 ;
}
