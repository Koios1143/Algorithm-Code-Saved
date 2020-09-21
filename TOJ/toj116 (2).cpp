#include<iostream>
#include<vector>
using namespace std;
string a,b;
long long n,m;
vector<int> day;

void DP(int d,int w)
{
	if(d==1)
	{
		cout<<a[w-1]<<"\n";
		return;
	}
	else if(d==2)
	{
		cout<<b[w-1]<<"\n";
		return;
	}
	
	if(w>day[d-1])
	{
		return DP(d-2,w-day[d-1]);
	}
	else
	{
		return DP(d-1,w);
	}
	
}

int main()
{
	cin>>a>>b;
	cin>>n>>m;
	
	day.clear();
	//day.resize(n);
	
	//build look-up table
	day.push_back(0);
	day.push_back(a.size());
	day.push_back(b.size());
	for(int i=3 ; i<n ; i++)
	{
		day.push_back(day[i-2]+day[i-1]);
	}
	
	/*for(int i=0 ; i<n ; i++)
	{
		cout<<day[i]<<" ";
	}*/
	
	if(m>day[n])
	{
		cout<<"X\n";
	}
	
	DP(n,m);
	
	
	

 return 0 ;
}

