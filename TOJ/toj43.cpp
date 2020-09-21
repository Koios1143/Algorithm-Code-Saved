#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct dot{
	int val;
	int me,next;
	dot(int m,int n,int v)
	{
		me=m;
		next=n;
		val=v;
	}
};
int main()
{
	int n,m;
	cin>>n>>m;
	vector<dot> arr[n];
	int dis[n];
	for(int i=0 ; i<n ; i++)
	{
		dis[i]=2147483647;
	}
	for(int j=0,a,b,l ; j<m ; j++)
	{
		cin>>a>>b>>l;
		dot d1(a,b,l);
		arr[a].push_back(d1);
		dot d2(b,a,l);
		arr[b].push_back(d2);
	}
	int start,end;
	cin>>start>>end;
	dis[start]=0;
	queue<int>q;
	q.push(start);
	while(!q.empty())
	{
		int size=arr[q.front()].size();
		for(int i=0 ; i<size ; i++)
		{
			if(dis[(arr[q.front()][i]).next]>dis[(arr[q.front()][i]).me]+(arr[q.front()][i]).val)
			{
				dis[(arr[q.front()][i]).next]=dis[(arr[q.front()][i]).me]+(arr[q.front()][i]).val;
				q.push((arr[q.front()][i]).next);
			}
		}
		q.pop();
	}
	cout<<dis[end]<<"\n";
 return 0 ;
}

