//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,arr[1000000];
string s;
bool is_lower(char c){
	return (c>='a' && c<='z');
}
bool is_higher(char c){
	return (c>='A' && c<='Z');
}
bool same(char a,char b){
	return (is_lower(a) && is_lower(b)) || (is_higher(a) && is_higher(b));
}
int main(){
	IOS
	while(cin>>n){
		cin>>s;
		int lower=0;
		int higher=0;
		arr[0]=1;
		int times=1;
		for(int i=1 ; i<s.size() ; i++){
			if(!same(s[i],s[i-1])){
				if(arr[i-1]%n!=0){
					arr[i]=1;
					times=1;
				}
				else{
					arr[i]=arr[i-1]+1;
					times++;
				}
			}
			else{
				if(arr[i-1] >= n*times){
					arr[i]=n;
					times=1;
				}
				else
					arr[i]=arr[i-1]+1;
			}
		}
		int ans=0;
		for(int i=0 ; i<s.size() ; i++){
			if(arr[i]%n==0)
				ans=max(ans,arr[i]);
		}
		cout<<ans<<"\n";
	}
	return 0;
}

