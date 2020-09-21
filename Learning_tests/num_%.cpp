#include<iostream>
using namespace std;
int main ()
{
	int num;
	cout<<"請輸入一個值:";
	cin>>num;
	if((num%2)==0)
	{
		cout<<num<<"是偶數"<<endl; 
	}
	else
	{
		cout<<num<<"是奇數"<<endl; 
	}
	system("pause");
}
