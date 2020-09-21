#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0,s,q,flag ; i<t ; i++)
	{
		int arr[15005];
		cin>>s;
		for(int j=0 ; j<s ; j++)
		{
			cin>>arr[j];
		}
		sort(arr,arr+s);
		cin>>q;
		for(int k=0,w ; k<q ; k++)
		{
			flag=0;
			cin>>w;
			int timer=0;
			if((w>arr[s-1]&&arr[s-2]+arr[s-1]<w)||(w<arr[0]))
			{
				flag=0;
			}
			else
			{
				while(flag!=2&&timer!=s)
				{
					if(arr[timer]<w)
					{
						flag++;
					}
					timer++;
				}
			}
			if(flag>=2)
			{
				cout<<"Good!"<<endl;
			}
			else
			{
				cout<<"So Bad!"<<endl;
			}
		}
	}


 return 0 ;
}

