#include<bits/stdc++.h>
using namespace std;
int n,m;
priority_queue<int> pq[100005];
bool inq[100005];
int main() {
	cin>>n>>m;
	for(int i=0,a,b ; i<n-1 ; i++){
		cin>>a>>b;
		pq[a].push(b);
		pq[b].push(a);
	}
	queue<int> q;
	q.push(2);
	bool YN=false;
	inq[2]=true;
	while(!q.empty()){
		if(YN){
			cout<<' ';
		}
		else{
			YN=true;
		}
		int now=q.front();
		q.pop();
		cout<<now;
		while(!pq[now].empty()){
			if(!inq[pq[now].top()]){
				q.push(pq[now].top());
			}
			pq[now].pop();
		}
	}
	cout<<'\n';
	return 0;
}

