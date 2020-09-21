#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	if(n!=0)
	{
		do
		{
			v.push_back(n%2);
			n/=2;
		}	while(n>=2);
		v.push_back(n);
		for(int i=0,sp=v.size() ; i<sp ; i++)
		{
			cout<<v.back();
			v.pop_back();
		}
		cout<<endl;
	}
	else
	{
		cout<<"0"<<endl;
	}


 return 0 ;
}

