#include<iostream>
using namespace std ;
int main ()
{
	int A =5;
	++A;
	cout<<A;//OUTPUT 6
	
	int B =5;
	B++;
	cout<<B;//OUTPUT 6
	
	cout<<++A;//OUTPUT 7
	cout<<B++;//OUTPUT 6
	
	cout<<A;//OUTPUT 7
	cout<<B;//OUTPUT 7
	/*
		�]�N�O����X++�ܼƷ|��X���W�᪺���G
		�ӿ�X�ܼ�++�|��X�쥻����,���O�ȷ|���W 
	*/
	
	system("pause");
}
