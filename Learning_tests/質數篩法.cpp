#include<iostream>
using namespace std;
int MAXN=1000001;
bool flag[1000001] = {1};
void erat()
{
	cout<<"runnging"<<endl;
	flag[0]=0;
	flag[1]=0;
	for(int i=2;i<=1000001;++i)
	{
		if(flag[i]==1)
		{
			for(int j=i*i;j<=1000001;j+=i)
			{
				flag[j]=0;
				//cout<<"flag["<<j<<"]=0"<<endl;
			}
		}
	}
}
int main()
{
	int a;
	erat();
	while(cin>>a)
	{
		if(flag[a]==1)
		{
			cout<<"not prime"<<endl;
		}
		else
		{
			cout<<"prime"<<endl;
		}
	}


 return 0 ;
}

