#include<iostream>
using namespace std;
int main()
{
	string l[5];
	int start_px,start_py;
	int puzzle=0;
	bool first=true;
	while(true/*getline(cin,l[0])*/)
	{
		puzzle++;
		if(first)
		{
			getline(cin,l[0]);
			first=false;
		}
		else
		{
			cout<<"........................\n";
			getchar();
			getline(cin,l[0]);
			cout<<l[0]<<"....."<<endl;
		}
		if(l[0]=="Z")
		{
			break;
		}
		else
		{
			//input
			for(int i=1 ; i<5 ; i++)
			{
				getline(cin,l[i]);
			}
		}
		char arr[5][5];
		for(int i=0 ; i<5 ; i++)
		{
			for(int j=0 ; j<5 ; j++)
			{
				arr[i][j]=(l[i])[j];
				if(arr[i][j]==' ')
				{
					start_px=j;
					start_py=i;
				}
			}
		}
		char cmd;
		bool YN=true;
		while(cin>>cmd)
		{
			if(cmd=='0') break;
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

