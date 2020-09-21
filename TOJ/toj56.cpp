#include<iostream>
using namespace std;
int main()
{
	int sheep,man;
	while(cin>>sheep>>man)
	{
		if(sheep<man)
		{
			swap(sheep,man);
		}
		bool fight;//0:man 1:sheep
		while(sheep>0&&man>0)
		{
			if(sheep>man)
			{
				fight=0;
			}
			else
			{
				fight=1;
			}
			if(fight)
			{
				if(sheep>=man)
				{
					sheep=0;
				}
				else
				{
					man-=sheep;
					fight=0;
				}
			}
			else
			{
				if(man>=sheep)
				{
					man=0;
				}
				sheep-=man;
				fight=1;
			}
		}
		if(sheep>man)
		{
			cout<<sheep<<endl;
		}
		else
		{
			cout<<man<<endl;
		}
	}


 return 0 ;
}

