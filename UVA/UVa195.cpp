//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n;
string s;
const int MaxN = 10000000;
char ans[MaxN];
bool used[MaxN];
void sol(int n){
	if(n==s.size()){
		for(int i=0 ; i<s.size() ; i++){
			cout<<ans[i];
		}
		cout<<'\n';
		return;
	}
	char last = '\0';
	for(int i=0 ; i<s.size() ; i++){
		if(!used[i] && s[i]!=last){
			ans[n]=s[i];
			used[i]=true;
			sol(n+1);
			used[i]=false;
			last=s[i];
		}
	}
}

bool cmp(char a,char b){
	if(tolower(a)<tolower(b)){
		return true;
	}
	else if(tolower(a)>tolower(b)){
		return false;
	}
	else{
		return (a>='A' && a<='Z');
	}
}

int main(){
	IOS
	while(cin>>n){
		while(n--){
			memset(used,sizeof(used),0);
			cin>>s;
			sort(s.begin(),s.end(),cmp);
			sol(0);
		}
	}
	return 0;
}

