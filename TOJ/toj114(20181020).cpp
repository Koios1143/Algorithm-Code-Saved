#include<iostream>
using namespace std;
int main()
{
	int stage[5][6];
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<6 ; j++)
		{
			cin>>stage[i][j];
		}
	}
	bool flag=0;
	for(int i=0 ; i<5 ; i++)
	{
		if(flag==0)
		{
			for(int j=0 ; j<4 ; j++)
			{
				if(stage[i][j]==stage[i][j+1]&&stage[i][j+1]==stage[i][j+2])
				{
					flag=1;
				}
			}
		}
		else
		{
			break;
		}
	}
	for(int i=0 ; i<6 ; i++)
	{
		if(flag==0)
		{
			for(int j=0 ; j<3 ; j++)
			{
				if(stage[j][i]==stage[j+1][i]&&stage[j+1][i]==stage[j+2][i])
				{
					flag=1;
				}
			}
		}
		else
		{
			break;
		}
	}
	if(flag==0)
	{
		cout<<"No"<<endl;
	}
	else
	{
		cout<<"Yes"<<endl;
	}


 return 0 ;
 
}



