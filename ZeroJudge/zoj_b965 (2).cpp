//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int r,c,m,arr[10][10],tmp[10][10];
void cycle(){
	memset(tmp,0,sizeof(tmp));
	swap(r,c);
	for(int i=0 ; i<r ; i++){
		for(int j=0 ; j<c ; j++){
			tmp[i][j] = arr[j][r-i-1];
		}
	}
	swap(arr,tmp);
}
void flip(){
	for(int i=r-1,j=0 ; i>j ; i--,j++){
		for(int k=0 ; k<c ; k++){
			swap(arr[i][k],arr[j][k]);
		}
	}
}
void print_arr(){
	for(int i=0 ; i<r ; i++){
		for(int j=0 ; j<c ; j++){
			if(j)
				cout<<' ';
			cout<<arr[i][j];
		}
		cout<<"\n";
	}
}
int main(){
	IOS
	while(cin>>r>>c>>m){
		memset(arr,0,sizeof(arr));
		for(int i=0 ; i<r ; i++){
			for(int j=0 ; j<c ; j++){
				cin>>arr[i][j];
			}
		}
		stack<int> s;
		for(int i=0,tmp ; i<m ; i++){
			cin>>tmp;
			s.push(tmp);
		}
		while(!s.empty()){
			int now=s.top();
			if(now==0)
				cycle();
			else
				flip();
			s.pop();
		}
		cout<<r<<" "<<c<<"\n";
		print_arr();
	}
	return 0;
}

