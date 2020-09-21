#include<iostream>
using namespace std;
long long f(int n,int cnt){
	if(n==1)
		return cnt;
	else{
		if(n%2==0){
			n/=2;
			cnt++;
			return f(n,cnt);
		}
		else{
			n=3*n+1;
			cnt++;
			return f(n,cnt);
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int i,j;
	while(cin>>i>>j){
		cout<<i<<" "<<j<<" ";
		if(i>j)
			swap(i,j);
		int Max=0;
		for(int k=i ; k<=j ; k++){
			int now=f(k,1);
			Max=now>Max ? now : Max;
		}
		cout<<Max<<"\n";
	}
 return 0 ;
}

