#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	string s;
	cin>>s;
	int ss=s.size();
	for(int i=0 ; i<ss ; i++)
	{
		v.push_back((int)s[i]-48);
	}
	int m=0;
	char mode='A';
	while(m<ss&&m>=0)
	{
		if(mode=='A')
		{
			//cout<<"mode A"<<endl;
			if(v[m]==0)
			{
				m++;
				mode='B';
			}
			else
			{
				v[m]=0;
				m+=2;
				mode='D';
			}
		}
		else if(mode=='B')
		{
			//cout<<"mode B"<<endl;
			if(v[m]==0)
			{
				v[m]=1;
				m--;
				mode='D';
			}
			else
			{
				break;
			}
		}
		else if(mode=='C')
		{
			//cout<<"mode C"<<endl;
			if(v[m]==0)
			{
				v[m]=1;
				m+=2;
				mode='E';
			}
			else
			{
				v[m]=0;
				m-=2;
				mode='A';
			}
		}
		else if(mode=='D')
		{
			//cout<<"mode D"<<endl;
			if(v[m]==0)
			{
				v[m]=1;
				m++;
				mode='C';
			}
			else
			{
				m++;
				mode='E';
			}
		}
		else
		{
			//cout<<"mode else"<<endl;
			if(v[m]==0)
			{
				m++;
				mode='A'; 
			}
			else
			{
				m--;
				mode='C';
			}
		}
	}
	for(int i=0 ; i<ss ; i++)
	{
		cout<<v[i];
	}
	cout<<endl;

 return 0 ;
}

