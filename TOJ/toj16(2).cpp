#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0,s,q ; i<t ; i++)
	{
		int arr[150005];
		for(int j=0 ; j<150005 ; j++)
		{
			arr[j]=0;
		}
		cin>>s;
		for(int j=0,sp ; j<s ; j++)
		{
			cin>>sp;
			arr[sp]++;
		}
		cin>>q;
		for(int j=0,sp2,l=1 ; j<q ; j++)
		{
			l=1;
			cin>>sp2;
			bool YN=0;
			while(l<=sp2-l)
			{
				arr[l]--;
				arr[sp2-l]--;
				if(arr[l]>=0&&arr[sp2-l]>=0)
				{
					YN=1;
					break;
				}
				else
				{
					arr[l]++;
					arr[sp2-l]++;
					l++;
				}
			}
			if(YN)
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

