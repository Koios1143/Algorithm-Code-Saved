//By Koios1143
#include<iostream>
using namespace std;
int head[50005],n,m,p,q,ans=0,Case=1;
bool vis[50005];
int Find(int x){
	if(head[x]==x)
		return x;
	return head[x] = Find(head[x]);
}
void Union(int x, int y){
	head[Find(x)] = Find(y);
}
int main(){
	while(cin>>n>>m && (n!=0 && m!=0)){
		for(int i=0 ; i<50005 ; i++){
			head[i]=i;
			vis[i]=false;
		}
		ans=0;
		for(int i=0 ; i<m ; i++){
			cin>>p>>q;
			Union(p,q);
		}
		for(int i=1,tmp ; i<=n ; i++){
			tmp=Find(i);
			if(!vis[tmp]){
				vis[tmp]=true;
				ans++;
			}
		}
		cout<<"Case "<<Case++<<": "<<ans<<"\n";
	}
	return 0;
}
