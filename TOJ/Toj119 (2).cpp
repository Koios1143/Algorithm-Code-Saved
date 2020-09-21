//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int n,m,arr[2000010];
int main(){
	init();
	cin>>n;
	for(int i=1 ; i<=n ; i++){
		cin>>arr[i];
	}
	cin>>m;
	bool YN=true;
	for(int i=0,a,b ; i<m ; i++){
		cin>>a>>b;
		if(abs(a-b)-1>7){
			cout<<"I QUIT!\n";
			YN=false;
			break;
		}
		else{
			swap(arr[a],arr[b]);
		}
	}
	if(YN){
		cout<<"SORTED!\n";
	}
	for(int i=1 ; i<=n ; i++){
		if(i!=1)
			cout<<' ';
		cout<<arr[i];
	}
	cout<<'\n';

	return 0;
}

