//By Koios1143
#include<iostream>
#include<memory.h>
#include<iomanip>
using namespace std;
long long k,n;
double DP[110][15];
/*double qpow(long long a,long long b){
	if(b==0)
		return 1;
	if(b%2==1){
		return a*qpow(a,b-1);
	}
	else{
		long long tmp=qpow(a,b>>1);
		return tmp*tmp;
	}
}*/
int main(){
//--------------------
#ifdef local
	   freopen("in.txt","r",stdin);
	   //freopen("out.txt","w",stdout);
#endif
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
//--------------------
	while(cin>>k>>n){
		memset(DP,0,sizeof(DP));
		for(int i=0 ; i<=k ; i++){
			DP[0][i]=1/(k*1.0+1.0);
		}
		for(int i=1 ; i<n ; i++){
			for(int j=0 ; j<=k ; j++){
				if(j-1>=0){
					DP[i][j]+=DP[i-1][j-1];
				}
				DP[i][j]+=DP[i-1][j];
				if(j+1<=k){
					DP[i][j]+=DP[i-1][j+1];
				}
				DP[i][j]*=1/(k*1.0+1.0);
			}
		}
		double res=0;
		for(int i=0 ; i<=k ; i++){
			res+=DP[n-1][i];
		}
		cout<<fixed<<setprecision(5)<<100.0*res<<'\n';
	}

	return 0;
}

