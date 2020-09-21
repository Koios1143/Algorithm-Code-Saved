#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string s;
	while(cin>>n)
	{
		getchar();
		getline(cin,s);
		if(s.size()%n!=0)
		{
			//cout<<"IN"<<endl;
			for(int i=0,size=s.size() ; i<n-size%n ; i++)
			{
				s+='*';
			}
		}
		//cout<<s<<endl;
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0,size=s.size() ; j<size/n ; j++)
			{
				cout<<s[i+n*j];
			}
		}
		cout<<endl;
	}
	


 return 0 ;
}

