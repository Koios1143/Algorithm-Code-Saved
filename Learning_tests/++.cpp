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
		也就是說輸出++變數會輸出遞增後的結果
		而輸出變數++會輸出原本的值,但是值會遞增 
	*/
	
	system("pause");
}
