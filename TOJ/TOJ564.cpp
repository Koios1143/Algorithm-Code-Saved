//By Koios1143
#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int> 
using namespace std;
const int N = 1e6+10;
const int mod = 1e9+7;
int n,arr[N],cnt[N],ans=1,odd=0,diff=0;
int p(int x,int y){
	int ret=1;
	y++;
	while(y<=x){
		ret*=y;
		ret%=mod;
		y++;
	}
	return ret;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int j=0;
    for(int i=0 ; i<n ; i++){
        if(i==0 || arr[i]==arr[i-1])
            cnt[j]++;
        else
            cnt[++j]++;
    }
    for(int i=0,k ; i<=j ; i++){
        if(cnt[i]%2) odd++;
        ans*=p(cnt[i],cnt[i]/2);
        ans%=mod;
        diff+=cnt[i]/2;
    }
    for(int i=1 ; i<=diff ; i++){
        ans*=i;
        ans%=mod;
    }
    if(odd>1) cout<<0<<"\n";
    else cout<<ans<<"\n";
}
