#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
		for(int i=0 ; i<n ; i++)
		{
			for(int m=0 ; m<n ; m++)
			{
				for(int j=0 ; j<n-1-i ; j++)
				{
					cout<<" ";
				}
				for(int k=0 ; k<2*i+1 ; k++)
				{
					cout<<"*";
				}
				if(i+1==n)
				{
					
				}
				else
				{
					for(int l=0 ; l<n-1-i ; l++)
					{
						cout<<" ";
					}
				}
			}
			cout<<endl;
		}
		for(int i=0 ; i<n-1 ; i++)
		{
			for(int k=0 ; k<n ; k++)
			{
				for(int j=0 ; j<1+i ; j++)
				{
					cout<<" ";
				}
				for(int l=0 ; l<2*n-1-2-2*i ; l++)
				{
					cout<<"*";
				}
				if(k+1!=n)
				{
					for(int l=0 ; l<1+i ; l++)
					{
						cout<<" ";
					}
				}
			}
			cout<<endl;
		}
	int num=0;
	for(int i=0 ; i<n ; i++)
	{
		num+=1+2*i;
	}
	num=num+num-(2*n-1);
	cout<<n*num<<endl;

	return 0;
}

