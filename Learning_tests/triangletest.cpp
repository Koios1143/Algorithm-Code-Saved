#include<iostream>
using namespace std;

int main() {
	

	int n;
	cin>>n;
	for(int i=1 ;i<=2*n+1 ; i+=2)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}

