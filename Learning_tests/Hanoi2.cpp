#include<iostream>
#include<cmath>
using namespace std;
void Hanoi(int n,char A,char B, char C)
{
	if(n==1)
	{
		cout<<"將第"<<n<<"個圓盤從"<<A<<"移到"<<C<<endl; 
	}
	else
	{
		cout<<"將"<<n-1<<"個圓盤從"<<A<<"移動到"<<B<<endl; 
		Hanoi(n - 1, A, C, B);
        cout<<"將第"<<n<<"個圓盤從"<<A<<"移到"<<C<<endl; 
        Hanoi(n - 1, B, A, C);
	}
}

int main()
{
	int n;
	cout<<"請輸入圓盤數:";
	cin>>n;
	Hanoi(n,'A','B','C');
	cout<<"共需移動"<< pow(2,n)-1<<"次"<<endl; 
	
 return 0 ;
 
}



