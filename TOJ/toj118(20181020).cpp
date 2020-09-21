#include<iostream>
using namespace std;
int main()
{
	int N,M,C,D;
	int A[1005];
	cin>>N;
	for(int i=0 , n , m ; i<N ; i++)
	{
		cin>>n>>m;
		A[n]=m;
	}
	cin>>M;
	for(int i=0 , n , m ; i<M ; i++)
	{
		cin>>n>>m;
		if(A[n]*n==m)
		{
			cout<<"The shopkeeper is honest."<<endl;
		}
		else
		{
			cout<<m-A[n]*n<<endl;
		}
	}

 return 0 ;
 
}
