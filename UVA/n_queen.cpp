//by Koios1143
#include<iostream>
using namespace std;
int in[20];
int n;
int all;
int lowbit(int x){
	return x&(-x);
}
int ans=0;
void dfs(int depth,int line,int left,int right){
	int aval=(~(line | left | right | in[depth]))&all;
	for(int col=lowbit(aval) ; col ; aval^=col,col=lowbit(aval)){
		if((col | line)==all){
			ans++;
			return;
		}
		dfs(depth+1,(line|col),(left|col)<<1,(right|col)>>1);
	}
	return;
}
int main(){
	//---------------------------------
	#ifdef local
		freopen("11195.txt","r",stdin);
		freopen("11195_.txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//---------------------------------
	int times=1;
	char tmp;
	while(cin>>n && n){
		all=(1<<n)-1;
		for(int i=0 ; i<15 ; i++){
			in[i]=0;
		}
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				cin>>tmp;
				in[i]<<=1;
				if(tmp=='*'){
					in[i]=in[i]|1;
				}
			}
		}
		dfs(0,0,0,0);
		cout<<"Case "<<times<<": "<<ans<<"\n";
		ans=0;
		times++;
	}
	
		
 return 0 ;
}

