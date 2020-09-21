#include<iostream>
#include<string>
using namespace std;
string tolower_(string s)
{
	string s2="";
	for(int i=0 ; i<s.size() ; i++)
	{
		s2+=tolower(s[i]);
	}
	return s2;
}
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	if((tolower_(a)=="xiplus"&&tolower_(b)=="jill")||(tolower_(a)=="jill"&&tolower_(b)=="xiplus"))
	{
		cout<<"Hello, Sister!\nHi, Sister!\n";
	}
	else
	{
		cout<<"Hello, "<<b<<"!"<<endl;
		cout<<"Hi, "<<a<<"!"<<endl;
	}

 return 0 ;
}

