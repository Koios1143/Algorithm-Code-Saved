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
	for(int i=0 ; i<n; i++)
	{
		for(int j=0 ; j<srr[i].size() ; j++)
		{
			string s=srr[i];
			for(int k=0 ; k<s.size()-1 ; k++)
			{
				ans=s;
				s.substr(k,k+1);
				t1="";
				t2="";
				for(int l=0 ; l<s.size() ; l++)
				{
					t1+=s[l];
				}
				for(int m=s.size() ; m>0 ; m--)
				{
					t2+=s[m];
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
	}


 return 0 ;
 
}



