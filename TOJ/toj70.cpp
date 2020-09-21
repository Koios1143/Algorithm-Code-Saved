#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double r1,i1,r2,i2;
	char d;
	cin>>r1>>i1>>d>>r2>>i2;
	if(d=='+')
	{
		cout<<fixed<<setprecision(2)<<r1+r2;
		if(i1+i2>0)
		{
			cout<<"+";
		}
		cout<<i1+i2<<"i\n";
	}
	else if(d=='-')
	{
		cout<<fixed<<setprecision(2)<<r1-r2;
		if(i1-i2>0)
		{
			cout<<"+";
		}
		if(i1-i2==0)
		{
			cout<<"\n";
		}
		else
		{
			cout<<i1-i2<<"i\n";
		}
	}
	else if(d=='*')
	{
		cout<<fixed<<setprecision(2)<<(r1*r2-i1*i2);
		if(r1*i2+r2*i1>0)
		{
			cout<<"+";
		}
		if(r1*i2+r2*i1==0)
		{
			cout<<"\n";
		}
		else
		{
			cout<<r1*i2+r2*i1<<"i\n";
		}
	} 
	else
	{
		if(r2==0)
		{
			cout<<"0.00";
		}
		else
		{
			cout<<fixed<<setprecision(2)<<r1/r2;
		}
		if(i2==0)
		{
			cout<<"+0.00\n";
		}
		else
		{
			if(i1/i2>0)
			{
				cout<<"+";
			}
			if(i1/i2==0)
			{
				cout<<"\n";
			}
			else
			{
				cout<<i1/i2<<"i\n";
			}
		}
	}


 return 0 ;
}

