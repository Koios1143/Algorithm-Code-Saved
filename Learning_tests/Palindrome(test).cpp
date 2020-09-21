#include<iostream>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		char arr[20000];
		for(int i=s.size()-1 , timer=0 ; i>=0 ; i-- , timer++)
		{
			arr[timer]=s[i];
		}
		bool YN=true;
		int flag=0;
		for(int i=0 ; i<s.size() ; i++)
		{
			if(s[i]!=arr[i])
			{
				YN=false;
				flag++;
			}
		}
		if(YN==true)
		{
			cout<<"YES!"<<endl;
		}
		else
		{
			cout<<"NO!"<<endl;
			cout<<flag<<endl;
		}
	}
 return 0 ;
}
