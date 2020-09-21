# include <iostream>
using namespace std;
int main()
{
	long long  a,b,k=1;
	cin>>a>>b;
	cout<<a;
	for(int i=a ;i<b;i++)
	{
		cout<<"*"<<i+1;
		k*=i;
	}
	k*=b;
	cout<<"="<<k<<endl;

  return(0);
}
