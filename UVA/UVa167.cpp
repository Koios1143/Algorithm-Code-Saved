//by Koios1143
#include<iostream>
#include<iomanip>
using namespace std;
int n,arr[8][8],Max=0;
bool line[8],p[17],m[17];
void dfs(int depth,int ans){
	if(depth==8){
		if(ans>Max)
			Max=ans;
		return;
	}
	for(int i=0 ; i<8 ; i++){
		if(!line[i]&&!p[depth+i]&&!m[depth-i]){
			line[i]=p[depth+i]=m[depth-i]=true;
			dfs(depth+1,ans+arr[depth][i]);
			line[i]=p[depth+i]=m[depth-i]=false;
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
	cin>>n;
	while(n--){
		Max=0;
		for(int i=0 ; i<8 ; i++){
			for(int j=0 ; j<8 ; j++){
				cin>>arr[i][j];
			}
		}
		dfs(0,0);
		cout<<setw(5)<<Max<<"\n";
	}
 return 0 ;
}

