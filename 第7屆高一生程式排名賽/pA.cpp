#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	char a,b;
	cin>>a>>b;
	if(a=='S'&&b=='K')
		cout<<"IMPOSSIBLE\n";
	else if(a!='S')//situation 1
	{
		if(a=='C')
			cout<<"D ";
		else if(a=='D')
			cout<<"H ";
		else
			cout<<"S ";
		cout<<b<<"\n";
	}
	else//situation 2
	{
		cout<<"C ";
		if(b=='A')
			cout<<"2\n";
		else if(b=='T')
			cout<<"J\n";
		else if(b=='J')
			cout<<"Q\n";
		else if(b=='Q')
			cout<<"K\n";
		else
			cout<<b+1<<"\n";
	}
 return 0 ;
}

