#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	int num;
	while(cin>>num)
	{
		v.push_back(num);
	}
	cout<<v.size()<<endl;


 return 0 ;
}

