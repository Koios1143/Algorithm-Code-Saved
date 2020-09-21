#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0,s,q ; i<t ; i++)
	{
		scanf("%d",&s);
		int arr[s];
		bool brr[30005]={false};
		for(int j=0 ; j<s ; j++)
		{
			scanf("%d",&arr[j]);
			for(int k=0 ; k<j ; k++)
			{
				if(arr[j]!=0&&arr[k]!=0)
				{
					brr[arr[j]+arr[k]]=true;
				}
			}
		}
		scanf("%d",&q);
		for(int l=0,num ; l<q ; l++)
		{
			cin>>num;
			brr[num] ? printf("Good!\n") : printf("So Bad!\n");
		}
	}
 return 0 ;
}

