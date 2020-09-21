#include<iostream>
#include<assert.h>
using namespace std;
int main()
{
	int puzzle=0;
	bool first=true;
	while(true)
	{	
		string s;
		char arr[5][5];
		puzzle++;
		if(first)
		{
			first=false;
		}
		else
		{
			getchar();
		}
		int start_px=-1,start_py=-1;
		for(int i=0 ; i<5 ; i++)
		{
			getline(cin,s);
			if(s=="Z") return 0;
			assert(s.size()==5);
			for(int j=0 ; j<5 ; j++)
			{
				arr[i][j]=s[j];
				if(s[j]==' ')
				{
					assert(start_px==-1&&start_py==-1);
					start_px=j;
					start_py=i;
				}
			}
			
		}
		char cmd;
		bool YN=true;
		while(cin>>cmd)
		{
			if(cmd=='0')
			{
				break;
			}
			if(cmd=='A')
			{
				if(start_py-1<0)
				{
					YN=false;
				}
				//swap
				swap(arr[start_py][start_px],arr[start_py-1][start_px]);
				start_py-=1;
				
				cout<<"in A...\n";
				for(int i=0 ; i<5 ; i++)
				{
					for(int j=0 ; j<5 ; j++)
					{
						cout<<arr[i][j];
						if(j==4)
						{
							cout<<"\n";
						}
						else
						{
							cout<<" ";
						}
					}
				}
				system("pause");
				
			}
			else if(cmd=='B')
			{
				if(start_py+1>4)
				{
					YN=false;
				}
				//swap
				swap(arr[start_py][start_px],arr[start_py+1][start_px]);
				start_py+=1;
				
				cout<<"in B...\n";
				for(int i=0 ; i<5 ; i++)
				{
					for(int j=0 ; j<5 ; j++)
					{
						cout<<arr[i][j];
						if(j==4)
						{
							cout<<"\n";
						}
						else
						{
							cout<<" ";
						}
					}
				}
				system("pause");
				
			}
			else if(cmd=='L')
			{
				if(start_px-1<0)
				{
					YN=false;
				}
				//swap
				swap(arr[start_py][start_px],arr[start_py][start_px-1]);
				start_px-=1;
				
				cout<<"in L...\n";
				for(int i=0 ; i<5 ; i++)
				{
					for(int j=0 ; j<5 ; j++)
					{
						cout<<arr[i][j];
						if(j==4)
						{
							cout<<"\n";
						}
						else
						{
							cout<<" ";
						}
					}
				}
				system("pause");
				
			}
			else if(cmd=='R')
			{
				if(start_px+1>4)
				{
					YN=false;
				}
				//swap
				swap(arr[start_py][start_px],arr[start_py][start_px+1]);
				start_px+=1;
				
				cout<<"in R...\n";
				for(int i=0 ; i<5 ; i++)
				{
					for(int j=0 ; j<5 ; j++)
					{
						cout<<arr[i][j];
						if(j==4)
						{
							cout<<"\n";
						}
						else
						{
							cout<<" ";
						}
					}
				}
				system("pause");
				
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
					if(j==4)
					{
						cout<<"\n";
					}
					else
					{
						cout<<" ";
					}
				}
			}
		}
	}

 return 0 ;
}

