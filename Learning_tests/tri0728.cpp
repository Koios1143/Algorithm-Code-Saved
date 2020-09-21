#include<iostream>
using namespace std;
int main()
{
	int n;
	int k=1;
	cin>>n;
	while(n)
	{
		for(int i=0 ; i<=(n-2) ; i++)
		{
			cout<<" ";
		}
		for(int j=1  ; j<=k ; j++  )
		{
			cout<<"*";
		}
		k+=2;
		n--;
		cout<<endl;
	}

 return 0 ;
 
}



