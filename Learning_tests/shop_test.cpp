#include<iostream>
using namespace std;
int main ()
{
	int shirt , pants , vest , total;
	shirt =250;
	pants =300;
	vest =200;
	
	cout<<"請輸入上衣的數量"<<endl;
	 cin>>shirt ;
	 
	cout<<"請輸入褲子的數量"<<endl;
	 cin>>pants;
	 
	cout<<"請輸入背心數量"<<endl;
	 cin>>vest;
	 
	total = shirt*250+pants*300+vest*200 ;
	
	cout<<"總金額為:"<< total<<endl;
	
	system ("pause");
}
