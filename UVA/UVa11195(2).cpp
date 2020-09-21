//by Koios1143
#include<iostream>
using namespace std;
char arr[15][15];
int n,Case=0,ans=0;
int line=0;
int L=R=0;
int lowerbit(int x){
	return x&(-x);
}
void dfs(int depth){
	if(depth==n){
		ans++;
		return;
	}
	for(int i=0 ; i<n ; i++){
		if(lowerbit[line]!=i&&arr[depth][i]!='*'){
			
			dfs(depth+1);
			
		}
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
	while(cin>>n&&n){
		Case++;
		ans=0;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				cin>>arr[i][j];
			}
		}
		dfs(0);
		cout<<"Case "<<Case<<": "<<ans<<"\n";
	}
	
		
 return 0 ;
}

