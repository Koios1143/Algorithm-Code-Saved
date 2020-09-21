#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0,s,q ; i<t ; i++)
	{
		cin>>s;
		int heart[s];
		for(int j=0 ; j<s ; j++)
		{
			cin>>heart[j];
		}
		sort(heart,heart+s);
		cin>>q;
		for(int k=0,w ; k<q ; k++)
		{
			cin>>w;
			bool YN=0;
			for(int l=0 ; w>heart[l] ; l++)
			{
				int *flag=lower_bound(heart,heart+s,w-heart[l]);
				if(flag>&heart[0]&&flag<&heart[s-1])
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

