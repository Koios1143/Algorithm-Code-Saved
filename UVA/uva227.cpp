#include<iostream>
using namespace std;
int main()
{
	char arr[5][5],tmp;
	int puzzle=0;
	while(true)
	{
		bool enter=true;
		puzzle++;
		int start_px,start_py;
		for(int i=0 ; i<5 ; i++)
		{
			for(int j=0 ; j<5 ; j++)
			{
				if(enter)
				{
					if(i==0&&j==0) continue;
					arr[i][j]=getchar();
					//cin>>arr[i][j];
					if(arr[i][j]==' ')
					{
						start_px=i;
						start_py=j;
					}
					else if(arr[i][j]=='Z')
					{
						enter=false;
					}
				}
				
			}
		}
		if(!enter) break;
		for(int i=0 ; i<5 ; i++)
		{
			for(int j=0 ; j<5 ; j++)
			{
				cout<<arr[i][j];
			}
			cout<<"\n";
		}
		char cmd;
		bool YN=true;
		while(cin>>cmd&&cmd!='0')
		{
			if(!YN)
			{
				break;
			}
			if(cmd=='A')
			{
				if(start_py-1<0)
				{
					YN=false;
					continue;
				}
				swap(arr[start_py][start_px],arr[start_py-1][start_px]);
				start_py-=1;
			}
			else if(cmd=='B')
			{
				if(start_py+1>5)
				{
					YN=false;
					continue;
				}
				swap(arr[start_py][start_px],arr[start_py+1][start_px]);
				start_py+=1;
			}
			else if(cmd=='L')
			{
				if(start_px-1<0)
				{
					YN=false;
					continue;
				}
				swap(arr[start_py][start_px],arr[start_py][start_px-1]);
				start_px-=1;
			}
			else if(cmd=='R')
			{
				if(start_px+1>5)
				{
					YN=false;
					continue;
				}
				swap(arr[start_py][start_px],arr[start_py][start_px+1]);
				start_px+=1;
			}
		}
		cout<<"Puzzle #"<<puzzle<<":\n";
		if(!YN)
		{
			cout<<"This puzzle has no final configuration.\n";
		}
		else
		{
			for(int i=0 ; i<5 ; i++)
			{
				for(int j=0 ; j<5 ; j++)
				{
					cout<<arr[i][j];
					if(j!=4)
					{
						cout<<" ";
					}
					else
					{
						cout<<"\n";
					}
				}
			}
		}
	}


 return 0 ;
}

