#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0,s,q ; i<t ; i++)
	{
		cin>>s;
		bool arr[15001];
		for(int j=0,n ; j<s ; j++)
		{
			cin>>n;
			arr[n]=1;
		}
		cin>>q;
		for(int k=0,w,YN=0 ; k<q ; k++)
		{
			cin>>w;
			for(int l=1 ; l<s/2+1 ; l++)
			{
				if(arr[l]&&arr[w-arr[1]])
				{
					cout<<"Good!"<<endl;
					YN=1;
					break;
				}
			}
			if(YN==0)
			{
				cout<<"So Bad!"<<endl;
			}
		}
	}


 return 0 ;
}

