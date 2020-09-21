#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string D;
	cin>>D;
	
	string ans;
	int space=0;
	char a;
	for(int i=0 ; i<D.size() ; i++)
	{
		space=D[i];
		space-=t;
		if(space<65)
		{
			space=26+space;
		}
		a=space;
		ans+=a;
	}
	cout<<ans<<endl;
	
 return 0 ;
 
}



