#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int flag=0;//�x�s�̤j���]��     123 
	for(int i=0 ; i<n ; i++)
	{
		long long a,b;
		cin>>a>>b;
		if(a>b)
		{
			swap(a,b);//�O��a���p��b 
		}
		for(long long  j=1 ; j<=a ; j++)//���]�Ƴ̤j���W�La 
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



