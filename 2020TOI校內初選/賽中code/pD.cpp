#include<iostream>
using namespace std;
int n,arr[300005],map[300005],ans[300005];
long long k,tmp,i,j,px;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(i=1 ; i<=n ; i++){
		cin>>arr[i];
	}
	for(i=1 ; i<=n ; i++){
		cin>>map[i];
	}
	cin>>k;
	for(i=1 ; i<=n ; i++){
		px=i;
		tmp=k;
		bool set=false;
		if(k>n){
			for(j=1 ; j<=tmp; j++){
				px=map[px];
				if(!set && px==i){
					//cycle
					tmp=k%j;
					if(j<=tmp){
						set=true;
					}else{
						break;
					}
				}
			}
		}
		if(!set){
			px=i;
			for(j=1 ; j<=tmp ; j++){
				px=map[px];
			}
			ans[px]=arr[i];
		}
	}
	cout<<ans[1];
	for(i=2 ; i<=n ; i++){
		cout<<' '<<ans[i];
	}
	cout<<'\n';
	return 0;
}

