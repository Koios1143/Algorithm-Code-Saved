#include<iostream>
using namespace std;
void rtri(int h , int blank)
{
	int b=blank;
	for(int i=0 , l=1 ; i<h ; i++ , l+=2)
	{
		for(int j=0 ; j<b ; j++)
		{
			cout<<" ";
		}
		b--;
		for(int k=0 ; k<l ; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void utri(int h , int blank)//blank要輸入最小值 
{
	int space=1;
	for(int i=0 ; i<h-1 ; i++)
	{
		space+=2;
	}
	int b=blank;
	for(int i=0 ; i<h ; i++)
	{
		for(int j=0 ; j<b ; j++)
		{
			cout<<" ";
		}
		b++;
		for(int k=0 ; k<space ; k++)
		{
			cout<<"*";
		}
		space-=2;
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	int m;
	for(int i=0 ; i<n ; i++)
	{
		cin>>m;
		rtri(m-3 , m-1);
		int space=1;
		for(int j=0 ; j<m-1 ; j++)
		{
			space+=2;
		}
		for(int j=0 ; j<space ; j++)
		{
			cout<<"*";
		}
		cout<<endl;
		cout<<" ";
		for(int j=0 ; j<space-2 ; j++)
		{
			cout<<"*";
		}
		cout<<endl;
		for(int j=0 ; j<space ; j++)
		{
			cout<<"*";
		}
		cout<<endl;
		utri(m-3 , 3);
	}


 return 0 ;
 
}



