#include<iostream>
#include<cmath>
#include<memory.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int arr[3010],n;
	while(cin>>n){
		bool jolly=true,use[3010];
		memset(use,0,sizeof(use));
		cin>>arr[0];
		for(int i=1 ; i<n ; i++){
			cin>>arr[i];
			int cnt=abs(arr[i]-arr[i-1]);
			if(cnt>=n||cnt<1)
				jolly=false;
			if(use[cnt])
				jolly=false;
			else
				use[cnt]=true;
		}
		if(jolly){
			cout<<"Jolly\n";
		}
		else{
			cout<<"Not jolly\n";
		}
	}

 return 0 ;
}

