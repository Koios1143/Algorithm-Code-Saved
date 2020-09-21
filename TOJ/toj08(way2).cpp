#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string password;
	getline(cin,password);
	getline(cin,password);
	cout<<password.size()<<endl;
	for(int i=0 , k=0 , l=1; i<password.size() ; i++)
	{
		if(k>password.size()-1)
		{
			k=l;
			l+=1;
		}
		else
		{
			cout<<password[k];
			cout<<k;
			k+=n;
		}
	}


 return 0 ;
 
}



