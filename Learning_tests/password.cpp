#include<iostream>
using namespace std;
int main ()
{
	int password;
	cout<<"請輸入密碼:";
	cin>>password;
	
	if(password == 999)
	{
		cout<<"登入成功\!"<<endl;
		 
	 } 
	 else
	 {
	 	cout<<"登入失敗\!"<<endl;
		 
		  
	 }
	
	system("pause");
}
