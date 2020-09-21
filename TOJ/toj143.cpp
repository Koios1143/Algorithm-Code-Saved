//by Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
bool team1[50010];
bool team2[50010];
int n,m,a,b;
int main(){
	while(cin>>n>>m){
		memset(team1,0,sizeof(team1));
		memset(team2,0,sizeof(team2));
		bool find=false;
		cin>>a>>b;
		team1[a]=true;
		team2[b]=true;
		for(int i=1 ; i<m ; i++){
			cin>>a>>b;
			if(find)
				continue;
			if(team1[a]){
				if(team1[b]){
					find=true;
				}
				else{
					team2[b]=true;
				}
			}
			else{
				if(team2[b]){
					find=true;
				}
				else{
					team1[b]=true;
				}
			}
		}
		if(!find){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
 return 0 ;
}

