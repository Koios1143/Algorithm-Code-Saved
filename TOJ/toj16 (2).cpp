#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int s;
	for(int i=0 ; i<t ; i++)
	{
		cin>>s;
		int arr[s];
		for(int j=0,num ; j<s ; j++)
		{
			cin>>arr[j];
		}
		sort(arr,arr+s);
		int q;
		cin>>q;
		for(int k=0,qu ; k<q ; k++)
		{
			cin>>qu;
			int mid=s/2,pointer=0;
			bool YN=0;
			while(pointer<=mid)
			{
				if(*lower_bound(arr+pointer,arr+s-pointer,(q-arr[i]))==q-arr[i])
				{
					cout<<"Good!"<<endl;
					YN=1;
					break;
				}
				else
				{
					pointer++;
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

