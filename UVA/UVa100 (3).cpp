//by Koios1143
#include<iostream>
using namespace std;
int ans=0;

int f(int x){
	ans++;
	if(x==1)
		return ans;
	if(arr[i])
		return arr[i];
	else if(x%2==0)
		x/=2;
	else
		x=3*x+1;
	return f(x);
}
int arr[1000000];
int main(){
//---------------------------------
	#ifdef local
		//freopen(".txt","r",stdin);
		//freopen(".txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	for(int i=1 ; i<1000000 ; i++){
		arr[i]=f(i);
	}
	int n,m;
	while(cin>>n>>m){
		cout<<n<<" "<<m<<" ";
		ans=0;
		int result=0;
		for(int i=n ; i<=m ; i++){
			if(arr[i]>result)
				result=arr[i];
		}
		cout<<result<<"\n";
	}
	
		
 return 0 ;
}

