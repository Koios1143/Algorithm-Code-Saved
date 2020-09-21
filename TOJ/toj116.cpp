#include<iostream>
#include<string>
using namespace std;
void s(string s1,string s2,int n,string &s3)
{
	s3=s2+s1;
	while(n-3)
	{
		s1=s3;
		s3=s3+s2;
		s2=s1;
		n--;
	}
}
int main()
{
	string s1,s2,s3;
	cin>>s1>>s2;
	int n,k;
	cin>>n>>k;
	s(s1,s2,n,s3);
	if(s3.size()<k)
	{
		cout<<"X"<<endl;
	}
	else
	{
		cout<<s3[k-1]<<endl;
	}
 return 0 ;
}

