#include <iostream>
using namespace std;
int main()
{
	double road;
	int money;
	
	cout<<"請輸入搭乘距離(km)(1.5~2.25)"<<endl;
	cin>>road;
	if(1.5>road)
		{
		money=70;
		cout<<"總金額為"<<money<<endl;
		}
	else if (1.75>road>=1.5)
		{
		money=75;
		cout<<"總金額為"<<money<<endl;
	 	} 
	else if (2>road>=1.75)
		{
		money=80;
		cout<<"總金額為"<<money<<endl;
		}
	else if (2.25>road>=2)
		{
		money=85;
		cout<<"總金額為"<<money<<endl;
		}
	else if (2.5>road>=2.25)
		{
		money=90;
		cout<<"總金額為"<<money<<endl;
		}
	else{
		cout<<"值超過範圍"<<endl ;
	}
		
	
	
 system("pause");
}

