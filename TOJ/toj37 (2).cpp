#include<iostream>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		int flag=0;
		for(int i=1 ; i<s.size() ; i++)
		{
			if(s[i]==' ')
			{
				flag++;
			}
		}
		if(s.size()!=0)
		{
			flag++;
		}
		cout<<flag<<endl;
	} 


 return 0 ;
}

