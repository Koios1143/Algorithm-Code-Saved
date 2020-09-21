#include<iostream>
#include<string>
using namespace std;
bool f(string s)
{	string n1;
	string n2;
	for(int i=0 ; i<s.size()-1 ; i++)
	{
		s[i]=s[i+1];
		cout<<s[i]<<endl;
		for(int k=0 ; k<s.size()-1 ; k++)
		{
			n1+=s[k];
		}
		for(int j=s.size() ; j>0 ; j--)
		{
			n2+=s[j];
		}
	}
	//cout<<n1<<endl;
	//cout<<n2<<endl;
	if(n1==n2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	string s;
	cin>>s;
	if(f(s)==true)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}


 return 0 ;
 
}



