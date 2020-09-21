#include<iostream>
#include<string>
using namespace std;
string srr[20000];
int main()
{
	int n;
	cin>>n;
	string ans;
	string t1 , t2;

	for(int i=0 ; i<n ; i++)
	{
		cin>>srr[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		string s=srr[i];
		t1="";
		t2="";
		for(int j=0 ; j<s.size() ; j++)
		{
			//s.substr(j,j+1);
			s=srr[i];
			s=s.substr(0,j)+s.substr(j+1,s.size());
			cout<<s<<"''"<<endl;
			for(int k=0 ; k<s.size() ; k++)
			{
				t1+=s[k];
			}
			for(int l=s.size() ; l>0 ; l--)
			{
				t2+=s[l];
			}
			if(t1==t2)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
	


 return 0 ;
 
}



