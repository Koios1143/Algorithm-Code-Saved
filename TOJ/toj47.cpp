#include<iostream>
#include<algorithm>
using namespace std;
int Xi[1000005];
int main()
{
	int n;
	cin>>n;
	
	for(int i=0 ; i<n ; i++)
	{
		cin>>Xi[i];
	}
	int t;
	cin>>t;
	int k;
	for(int i=0 ; i<t ; i++)
	{
		cin>>k;
		sort(Xi,Xi+n);
		int flag=0;
		while(true)
		{
			if(k-Xi[flag]==0)
			{
				cout<<Xi[flag]<<endl;
				break;
			}
			else if(k-Xi[flag]>0)//k is right in flag
			{
				flag++;
			}
			else
			{
				if(flag==0)
				{
					cout<<"no "<<Xi[flag]<<endl;
					break;
				}
				else if(flag==n)
				{
					cout<<Xi[flag]<<" no"<<endl;
					break;
				}
				else
				{
					cout<<Xi[flag-1]<<" "<<Xi[flag]<<endl;
					break;
				}
			}
		}
	}

 return 0 ;
}

