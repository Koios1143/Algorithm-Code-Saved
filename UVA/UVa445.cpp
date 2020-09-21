//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
char step;
int cnt=0;
int main(){
	IOS
	while((step=cin.get())!=EOF){
		if(step=='\n' || step=='!')
			cout<<"\n";
		else if(step<='9' && step>='0'){
			cnt+=(step-'0');
		}
		else if((step<='Z' && step>='A') || step=='*'){
			while(cnt){
				cout<<step;
				cnt--;
			}
		}
		else if(step=='b'){
			while(cnt){
				cout<<' ';
				cnt--;
			}
		}
	}
	return 0;
}

