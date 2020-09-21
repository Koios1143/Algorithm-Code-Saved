//HEX --> ASCII
#include<iostream>
using namespace std;
int HEX_to_DEC(int a , int b)
{
	int result=0;
	a-=48;
	result+=a*16;
	if(b>=65)//A~F
	{
		b-=55;
	}
	else
	{
		b-=48;
	}
	result+=b;
	return result;
}
int main()
{
	string HEX;
	cout<<"½Ð¿é¤JHEX"<<endl;
	cin>>HEX;
	//from HEX 21 to HEX 7F
	for(int i=0 ; i<HEX.size()/2 ; i+=2)
	{
		cout<<(char)HEX_to_DEC(HEX[i],HEX[i+1])<<endl;
	}
	system("pause");
 return 0 ;
 
}



