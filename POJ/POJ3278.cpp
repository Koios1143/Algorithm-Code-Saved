#include<iostream>
#include<queue>
using namespace std;
const int Max=1e5+10;
int arr[Max];
bool inq[Max];
int time[Max];
int n,m;
int main()
{
	
	cin>>n>>m;
	queue<int> q;
	q.push(n);
	inq[n]=true;
	while(!q.empty())
	{
		if(q.front()==m)
		{
			break;
		}
		int dir[3]={q.front()+1,q.front()-1,q.front()*2};
		for(int i=0 ; i<3 ; i++)
		{
			if(dir[i]<=100000&&dir[i]>=0)
				if(!inq[dir[i]])
				{
					inq[dir[i]]=true;
					time[dir[i]]=time[q.front()]+1;
					q.push(dir[i]);
				}
		}
		q.pop();
	}
	cout<<time[m]<<"\n";

 return 0 ;
}

