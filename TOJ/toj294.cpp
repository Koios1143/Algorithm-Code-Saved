#include<iostream>
using namespace std;
int main()
{
	string A,B;
	getline(cin,A);
	getline(cin,B);
	string A1,B1;
	if(A.size()==6&&B.size()==4)
	{
		A1=A;
		for(int i=0 ; i<6 ; i++)
		{
			int sp=A1[i];
			if(sp<=90)
			{
				sp+=20;
			}
			A1[i]=sp;
		}
		B1=B;
		for(int i=0 ; i<4 ; i++)
		{
			int sp=B1[i];
			if(sp<=90)
			{
				sp+=20;
			}
			B1[i]=sp;
		}
	}
	else if(A.size()==4&&B.size()==6)
	{
		A1=A;
		for(int i=0 ; i<4 ; i++)
		{
			int sp=A1[i];
			if(sp<=90)
			{
				sp+=20;
			}
			A1[i]=sp;
		}
		B1=B;
		for(int i=0 ; i<6 ; i++)
		{
			int sp=B1[i];
			if(sp<=90)
			{
				sp+=20;
			}
			B1[i]=sp;
		}
	}
	if( (A1=="xiplus"&&B1=="jill") || (A1=="jill"&&B1=="xiplus"))
	{
		cout<<"Hello, Sister!"<<endl;
		cout<<"Hi, Sister"<<endl;
	}
	else
	{
		cout<<"Hello, "<<B<<"!"<<endl;
		cout<<"Hi, "<<A<<"!"<<endl;
	}

	 
	
	


 return 0 ;
 
}



