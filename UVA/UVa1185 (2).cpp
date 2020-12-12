#include<iostream>
#include<cmath>
using namespace std;
int n,m;
int ans[10000005];
double tmp;
int main(){
	for(int i=1 ; i<10000005 ; i++){
		tmp+=log10(i);
		ans[i]=(int)tmp+1;
	}
	cin>>n;
	while(n--){
		cin>>m;
		cout<<ans[m]<<'\n';
	}
	return 0;
}

