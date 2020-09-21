#include<iostream>
using namespace std;
int m,n,k,num;
bool first=true;
char c;
int main() {
	cin>>m;
	while(m--){
		if(first){
			first=false;
		}
		else{
			cout<<'\n';
		}
		bool YN[110];
		for(int i=0 ; i<110 ; i++){
			YN[i]=false;
		}
		cin>>n>>k;
		while(k--){
			cin>>num;
			int left[110],right[110];
			for(int i=0 ; i<num ; i++){
				cin>>left[i];
			}
			for(int i=0 ; i<num ; i++){
				cin>>right[i];
			}
			cin>>c;
			if(c=='='){
				for(int i=0 ; i<num ; i++){
					YN[left[i]]=true;
					YN[right[i]]=true;
				}
			}
		}
		int ww=0,px;
		for(int i=1 ; i<=n ; i++){
			if(!YN[i]){
				ww++;
				px=i;
			}
		}
		if(ww!=1){
			cout<<0<<"\n";
		}
		else{
			cout<<px<<"\n";
		}
	}
	return 0;
}
