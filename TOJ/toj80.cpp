#include<iostream>
using namespace std;
class tree_node
{
	public:
		int *num;
		void setdata(int n=0)
		{
			num=&n;
		}
};
class tree
{
	public:
		int *left_node;
		int *right_node;
		void setdata(int l=0,int r=0)
		{
			left_node=&l;
			right_node=&r;
		}
};
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	int l=0,r=n-1;
	//tree trees[];
	while(l<=r)
	{
		tree(arr[l],arr[r]);
		
	}


 return 0 ;
}

