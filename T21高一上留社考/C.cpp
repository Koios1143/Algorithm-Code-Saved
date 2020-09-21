#include<iostream>
using namespace std;

int main() {
	int N,A;
	cin>>N>>A;
	if(N<A)
	{
		cout<<N<<endl;
	}
	else
	{
		cout<<N%(A+1)<<endl;
	}

	return 0;
}

