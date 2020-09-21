#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	string s2="";
	bool UP=0;
	for(int i=0 ; i<s.size() ; i++)
	{
		if(s[i]==' ')
		{
			UP=1;
		}
		else
		{
			if(i==0)
			{
				s2+=(int)(s[i]-32);
			}
			else if(UP==0)
			{
				s2+=s[i];
			}
			else
			{
				s2+=(int)(s[i]-32);
				UP=0;
			}
		}
	}
	cout<<s2<<endl;

	return 0;
}

