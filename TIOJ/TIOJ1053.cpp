#include<iostream>
using namespace std;
int main()
{
	int p,q;
	cin>>p>>q;
	if(p<q)
	{
		swap(p,q);
	}
	if(p%q==0)
	{
		cout<<"Y"<<endl;
	}
	else
	{
		cout<<"N"<<endl;
	}


 return 0 ;
}

