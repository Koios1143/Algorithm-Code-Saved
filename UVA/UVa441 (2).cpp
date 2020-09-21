//by Koios1143
#include<iostream>
using namespace std;
int arr[15],k,ans[6];
void print(){
	for(int i=0 ; i<6 ; i++){
		if(i!=0)
			cout<<' ';
		cout<<ans[i];
	}
	cout<<'\n';
}
void dfs(int depth,int last){
	if(depth==6){
		print();
		return;
	}
	for(int i=last+1 ; i<k ; i++){
		ans[depth]=arr[i];
		dfs(depth+1,i);
	}
}
int main(){
//---------------------------------
	#ifdef local
		//freopen(".txt","r",stdin);
		//freopen(".txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	bool in=false;
	while(cin>>k&&k){
		if(in)
			cout<<"\n";
		else
			in=true;
		for(int i=0 ; i<k ; i++){
			cin>>arr[i];
		}
		dfs(0,-1);
	}
	
		
 return 0 ;
}

