#include<iostream>
#include<string>
using namespace std;
int math(int a)
{
	if(a/2.0>a/2) return a/2+1;
	else return a/2;
}
bool stringcheck(string s)
{
	string a,b;
	string ph;
	for(int i=0 ; i<s.size() ; i++)
	{
		if(s[i]<65 || (s[i]>=91 && s[i]<97) )
		{
			continue;
		}
		else if(s[i]>=65 && s[i]<=90)
		{
			s[i]+=32;
		}
		ph+=s[i];
	}
	for(int i=0 ; i<math(ph.size()) ; i++)
	{
		a+=ph[i];
	}
	for(int i=ph.size()-1 ; i>math(ph.size()) ; i--)
	{
		b+=ph[i];
	}//i>ph.size()/2-1
	cout<<a<<endl;
	cout<<b<<endl;
	if(a!=b) return false;
	else return true;
}
int main()
{
	string s;
	while(getline(cin,s))
	{
		if(stringcheck(s)==false)
		{
			cout<<s<<endl;
		}
		else{
			cout<<"SETUP! "<<s<<endl;
		}
	}

 return 0 ;
 
}



