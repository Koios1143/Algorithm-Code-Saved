#include<iostream>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n>>s;
	bool flag=false;
	for(int i=0 ; i<n ; i++)//enum start px
	{
		flag=false;
		for(int j=0 ; j+i<n ; j++)
		{
			if(s[j+i]!=s[n-j-1])//not palin
				flag=true;
		}
		if(!flag)//is palin
		{
			cout<<i<<"\n";
			return 0;
		}
	}
	cout<<n-1<<"\n";//all not same

 return 0 ;
}

