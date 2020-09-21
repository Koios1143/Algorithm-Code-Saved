#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		string ph_s;
		for(int i=0 ; i<s.size() ; i++)
		{
			if(s[i]>=65 && s[i]<=90)//A~Z
			{
				ph_s+=s[i]+32;
			}
			else if(s[i]>=97 && s[i]<=122)//a~z
			{
				ph_s+=s[i];
			}
			else//若為符號則不加入ph_s 
			{
				
			}
		}
		//cout<<ph_s<<endl;
		int ph_s_size;
		if(ph_s.size()/2.0>ph_s.size()/2)
		{
			ph_s_size=ph_s.size()+1;
		}
		else
		{
			ph_s_size=ph_s.size();
		}
		string a,b;
		for(int i=0 ; i<ph_s_size/2 ; i++)
		{
			a+=ph_s[i];
		}
		for(int i=0 ; i<a.size() ; i++)
		{
			b+=ph_s[ph_s.size()-1-i];
		}
		//cout<<a<<endl;
		//cout<<b<<endl;
		if(a==b)
		{
			cout<<"SETUP! "<<s<<endl;
		}
		else
		{
			cout<<s<<endl;
		}
	}
 return 0 ;
}
