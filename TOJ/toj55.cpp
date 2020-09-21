#include<iostream>
using namespace std;
signed int arr[1000005]={0};
int main()
{
	signed int N;
	cin>>N;
	signed int space=0;
	for(int i=0; i<N ; i++)
	{
		cin>>space;
		arr[space]+=1;
	}
	signed int M;
	cin>>M;
	for(int i=0; i<M ; i++)
	{
		cin>>space;
		cout<<arr[space]<<endl;
	}
 return 0 ;
}
