//By Koios1143
#include<iostream>
#include<memory.h>
#include<cmath>
using namespace std;
bool DP[10010][110];
int t,num[10010],n,k;
int main(){
//--------------------
#ifdef local
	   //freopen(".txt","r",stdin);
	   //freopen(".txt","w",stdout);
#endif
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
//--------------------
	cin>>t;
	while(t--){
		memset(num,0,sizeof(num));
		memset(DP,false,sizeof(DP));
		cin>>n>>k;
		for(int i=0,tmp ; i<n ; i++){
			cin>>tmp;
			num[i]=abs(tmp%k);
		}
		DP[0][num[0]]=true;
		for(int i=1 ; i<n ; i++){
			for(int j=0 ; j<k ; j++){
				DP[i][j]=DP[i-1][(j+num[i])%k] || DP[i-1][(j-num[i]+k)%k];
			}
		}
		DP[n-1][0] ? cout<<"Divisible\n" : cout<<"Not divisible\n";
	}

	return 0;
}

