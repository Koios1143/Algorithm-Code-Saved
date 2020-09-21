#include<iostream>
using namespace std;
int main()
{
	string s;
	int flag=0;
	while(getline(cin,s))
	{
		flag=0;
		for(int i=0 ; i<s.size() ; i++)
		{
			if(s[i]==(char)32)
			{
				flag++;
			}
		}
		if(s[0]>=48&&s[0]<=57)
		{
			flag++;
		}
		cout<<flag<<endl; 
	}


 return 0 ;
}

