#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a , b , c  ;
	char x;
	
	cin>>a>>x>>b;

	
	if(x=='+')
	{
		cout<<fixed<<setprecision(4)<<a<<" + "<<b<<" = "<<fixed<<setprecision(4)<<(a+b)<<endl;
	}
	if(x=='-'){
		cout<<fixed<<setprecision(4)<<a<<" - "<<b<<" = "<<fixed<<setprecision(4)<<(a-b)<<endl;
	}
	if(x=='*')
	{
		cout<<fixed<<setprecision(4)<<a<<" * "<<b<<" = "<<fixed<<setprecision(4)<<(a*b)<<endl;
	}
	if(x=='/')
	{
		if((b==0)||(a==0))
		{
			cout<<"ERROR"<<endl;	
		}
		else{
			
		
		cout<<fixed<<setprecision(4)<<a<<" / "<<b<<" = "<<fixed<<setprecision(4)<<(a/b)<<endl;
	
		}
	}


 return 0 ;
 
}



