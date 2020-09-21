#include<iostream>
using namespace std ;

int global = 5;//"global" from here
int main()
{
	
	{
	int local = 2;//"local" from here
	cout<<"local="<<local<<" global="<<global<<endl;
	} //to here
		{
			int local1 = 7;//"local1" from here
				cout<<"local1="<<local1<<" global="<<global<<endl;
			
		}//to here
	
	cout<<" global="<<global<<endl;
	
	 
	system("pause");
}//to here
