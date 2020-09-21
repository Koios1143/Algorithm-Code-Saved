#include<iostream>
using namespace std;
long long box[200005];
int main()
{
	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		cin>>box[i];
	}
	int t;
	cin>>t;
	bool success=1;
	long long a,b;
	for(int i=0,space ; i<t ; i++)
	{
		cin>>a>>b;
		if(a>b) swap(a,b);
		if(b-a>8)
		{
			success=0;
		}
		else if(success==1)
		{
			space=box[a-1];
			box[a-1]=box[b-1];
			box[b-1]=space;
		}
	}
	if(success==1)
	{
		cout<<"SORTED!"<<endl;
	}
	else
	{
		cout<<"I QUIT!"<<endl;
	}
	cout<<box[0];
	for(int i=1 ; i<n ; i++)
	{
		cout<<" "<<box[i];
	}
	cout<<endl;

 return 0 ;
}

