#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	long long n,m;
	//n=2147483648;
	//m=1000;
	//scanf("%d",&n);
	//scanf("%d",&m);
	cin>>n>>m;
	long long sec=0;
	while(n!=0)
	{
		if(m-n-1<=0)//die
		{
			sec+=5;
			m+=5;//cure
		}
		else//kill
		{
			while(m>0&&n>0)
			{
				//cout<<m-n-1<<endl;
				m=m-n;
				m--;
				n--;
				sec++;
			}
			//m--;
			//n--;
			
		}
	}
	//printf("%d\n",sec);
	cout<<sec<<endl;
	return 0;
}

