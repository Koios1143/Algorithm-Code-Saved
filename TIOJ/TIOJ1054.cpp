#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int times;
	cin>>times;
	int n=0;
	switch (s[0])
	{
		case 'M':
			n=1;
			break;
		case 'T':
			if(s[1]=='u')
			{
				n=2;
				break;
			}
			else
			{
				n=4;
				break;
			}
		case 'W':
			n=3;
			break;
		case 'F':
			n=5;
			break;
		case 'S':
			if(s[1]=='a')
			{
				n=6;
				break;	
			}
			else
			{
				n=7;
				break;
			}
	}
	n+=times;
	n%=7;
	switch (n)
	{
		case 0:
			cout<<"Sunday"<<endl;
			break;
		case 1:
			cout<<"Monday"<<endl;
			break;
		case 2:
			cout<<"Tuesday"<<endl;
			break;
		case 3:
			cout<<"Wednesday"<<endl;
			break;
		case 4:
			cout<<"Thursday"<<endl;
			break;
		case 5:
			cout<<"Friday"<<endl;
			break;
		case 6:
			cout<<"Saturday"<<endl;
			break;
	}


 return 0 ;
}

