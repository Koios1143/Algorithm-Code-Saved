#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int flag=0;//纗程そ计     123 
	for(int i=0 ; i<n ; i++)
	{
		long long a,b;
		cin>>a>>b;
		if(a>b)
		{
			swap(a,b);//玂靡aゲb 
		}
		for(long long  j=1 ; j<=a ; j++)//そ计程ぃ禬筁a 
		{
			if(a%j==0 && b%j==0)
			{
				flag=j;
			}
		}
		cout<<flag<<endl;
	}
 


 return 0 ;
 
}



