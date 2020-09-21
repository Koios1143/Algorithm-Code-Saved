#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(b*b-4*a*c<0)
	{
		cout<<"No real root"<<endl;
	}
	else
	{
		int n1=((-1)*b+sqrt(b*b-4*a*c))/(2*a);
		int n2=((-1)*b-sqrt(b*b-4*a*c))/(2*a);
		if(n1==n2)
		{
			cout<<"Two same roots x="<<n1<<endl;
		}
		else if(n1<n2)
		{
			cout<<"Two different roots x1="<<n2<<" , x2="<<n1<<endl;
		}
		else cout<<"Two different roots x1="<<n1<<" , x2="<<n2<<endl;
	}
	

 return 0 ;
}

