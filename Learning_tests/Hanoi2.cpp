#include<iostream>
#include<cmath>
using namespace std;
void Hanoi(int n,char A,char B, char C)
{
	if(n==1)
	{
		cout<<"�N��"<<n<<"�Ӷ�L�q"<<A<<"����"<<C<<endl; 
	}
	else
	{
		cout<<"�N"<<n-1<<"�Ӷ�L�q"<<A<<"���ʨ�"<<B<<endl; 
		Hanoi(n - 1, A, C, B);
        cout<<"�N��"<<n<<"�Ӷ�L�q"<<A<<"����"<<C<<endl; 
        Hanoi(n - 1, B, A, C);
	}
}

int main()
{
	int n;
	cout<<"�п�J��L��:";
	cin>>n;
	Hanoi(n,'A','B','C');
	cout<<"�@�ݲ���"<< pow(2,n)-1<<"��"<<endl; 
	
 return 0 ;
 
}



