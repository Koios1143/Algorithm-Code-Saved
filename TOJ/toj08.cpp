#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	string s;
	getline(cin,s);
	getline(cin,s);
	
	char arr[400][400];
	for(int i=0 , k=0 ; i<s.size()/n+1 ; i++)
	{
		for(int j=0 ; j<n ; j++ , k++)
		{
			arr[j][i]=s[k];
		}
	}
	
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<s.size()/n ; j++)
		{
			cout<<arr[i][j];
		}
	}
	
	
	


 return 0 ;
 
}



