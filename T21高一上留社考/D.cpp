#include<iostream>
using namespace std;

int main() {
	bool a,b,c,d;
	char a2,b2,c2,d2;
	cin>>a2>>b2>>c2>>d2;
	if(a2=='0')
	{
		a=0;
	}
	else
	{
		a=1;
	}
	if(b2=='0')
	{
		b=0;
	}
	else
	{
		b=1;
	}
	if(c2=='0')
	{
		c=0;
	}
	else
	{
		c=1;
	}
	if(d2=='0')
	{
		d=0;
	}
	else
	{
		d=1;
	}
	//cout<<a<<b<<c<<d<<endl;
	int N,M;
	cin>>N>>M;
	//getchar();
	bool arr[N][M];
	char num;
	for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<M ; j++)
		{
			cin>>num;
			if(num=='0')
			{
				arr[i][j]=0;
			}
			else
			{
				arr[i][j]=1;
			}
		}
	}
	int times=0;
	for(int i=0 ; i<N-1 ; i++)
	{
		for(int j=0 ; j<M-1 ; j++)
		{
			if((arr[i][j]==a) && (arr[i][j+1]==b) && (arr[i+1][j]==c) && (arr[i+1][j+1]==d))
			{
				times++;
			}
			else if(arr[i][j]==arr[i][j+1]&&arr[i][j]==a&&arr[i+1][j]==arr[i+1][j+1]&&arr[i+1][j]==c&&a==b&&c==d)
			{
				times+=2;
				j++;
			}
		}
	}
	cout<<times<<endl;
	return 0;
}

