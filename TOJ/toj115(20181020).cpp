#include<iostream>
using namespace std;
int main()
{
	int cards;
	cin>>cards;
	string card[15];
	for(int i=0  ; i<10 ; i++)
	{
		card[i]="EMPTY";
	}
	string s;
	for(int timer=0,n ; timer<cards ; timer++)
	{
		cin>>s>>n;
		card[n-1]=s;
	}
	for(int i=0 ; i<10 ; i++)
	{
		cout<<card[i]<<endl;
	}

 return 0 ;
 
}
