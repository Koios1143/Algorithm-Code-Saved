#include<iostream>
using namespace std;
int n,m,arr[500005],point[500005];
inline void swapp(int &a,int &b){
	int tmp=b;
	b=a;
	a=tmp;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=1 ; i<=n ; i++){
		point[i]=arr[i]=i;
	}
	for(int i=0,a,b,c,tmp ; i<m ; i++){
		cin>>a>>b>>c;
		if(a==1){
			swapp(arr[b],arr[c]);
			swapp(point[arr[b]],point[arr[c]]);
		}
		else if(a==2){
			int out=0;
			for(int j=b ; j<=c ; j++){
				if(arr[j]==j){
					continue;
				}
				else{
					out++;
					tmp=arr[j];
					swapp(arr[j],arr[point[j]]);
					swapp(point[tmp],point[j]);
				}
			}
			cout<<out<<'\n';
		}
	}
	return 0;
}

