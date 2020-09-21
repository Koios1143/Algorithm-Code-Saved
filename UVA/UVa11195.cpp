//by Koios1143
#include<iostream>
using namespace std;
char arr[15][15];
int n,Case=0,ans=0;
bool line[15];
bool p[31];
bool m[31];
void dfs(int depth){
	if(depth==n){
		ans++;
		return;
	}
	for(int i=0 ; i<n ; i++){
		if(!line[i]&&!p[depth+i]&&!m[depth-i]&&arr[depth][i]!='*'){
			line[i]=p[depth+i]=m[depth-i]=true;
			dfs(depth+1);
			line[i]=p[depth+i]=m[depth-i]=false;
		}
	}
}
int main(){
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

