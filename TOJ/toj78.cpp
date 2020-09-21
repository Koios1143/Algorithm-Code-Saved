#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	if(n==1)
	{
		return 0;
	}
	pair<long long,long long> lines[n];//left,right
	long long flag=-2147483649;
	for(int i=0,l,r ; i<n ; i++)
	{
		cin>>l>>r;
		if(l<=r)
		{
			lines[i].first=l;
			lines[i].second=r;
		}
		else
		{
			lines[i].first=flag;
			lines[i].second=flag;
		}
	}
	sort(lines,lines+n);
	//debug
	/*cout<<"-----debug-----"<<endl;
	for(int i=0 ; i<n ; i++)
	{
		cout<<i<<":"<<lines[i].first<<" "<<lines[i].second<<endl;
	}
	cout<<"-----debug-----"<<endl;*/
	for(int i=0 ; i<n-1 ; i++)
	{
		cout<<"in for\n";
		if(lines[i].first==lines[i].second&&lines[i+1].first==lines[i+1].second&&lines[i].second==lines[i+1].second)
		{
			cout<<"run 1\n";
			lines[i+1].first=flag;
			lines[i+1].second=flag;
			lines[i].first=flag;
			lines[i].second=flag;
		}
		else if(lines[i].second>=lines[i+1].first&&lines[i].second<=lines[i+1].second)
		{
			cout<<"run 2\n";
			lines[i+1].first=lines[i].first;
			lines[i].second=flag;
			lines[i].first=flag;
		}
		else if(lines[i+1].second<=lines[i].second)
		{
			cout<<"run 3\n";
			lines[i+1].second=lines[i].second;
			lines[i+1].first=lines[i].first;
			lines[i].second=flag;
			lines[i].first=flag;
		}
	}
	for(int i=0 ; i<n ; i++)
	{
		if(lines[i].first!=flag&&lines[i].second!=flag)
		{
			cout<<lines[i].first<<" "<<lines[i].second<<"\n";
		}
	}
 return 0 ;
}

