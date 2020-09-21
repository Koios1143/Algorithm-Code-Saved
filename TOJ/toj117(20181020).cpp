#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int flag=0;
	for(int timer=0 , point ; timer<a ; timer++)
	{
		cin>>point;
		if(point>flag)
		{
			flag=point;
		}
	}
	cout<<flag<<endl;


 return 0 ;
}
