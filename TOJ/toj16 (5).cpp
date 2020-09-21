#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	//bool arr[15001];
	/*for(int i=0 ; i<15001 ; i++)
	{
		arr[i]=0;
	}*/
	for(int i=0,s,q ; i<t ; i++)
	{
		bool arr[10000001];
		cin>>s;
		for(int j=0,sp ; j<s ; j++)
		{
			cin>>sp;
			arr[sp]=1;
		}
		cin>>q;
		bool YN=0;
		for(int k=0,sp2,l=1,mid=(s+1)/2 ; k<q ; k++)
		{
			YN=0;
			cin>>sp2;
			while(l<sp2-l)
			{
				if(arr[l]&&arr[sp2-l]&&l!=(sp2-l))
				{
					YN=1;
					break;
				}
				else
				{
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

