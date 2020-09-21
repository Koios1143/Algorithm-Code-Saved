//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
string stat[10][10];
int out=0,out_tot=0,point=0,bat_time=0,b;
bool base[4];//home, 1, 2, 3 base
void run(int bases){
	base[0]=true;
	while(bases--){
		for(int i=3 ; i>=0 ; i--){
			if(base[i]){
				base[i]=false;
				if(i==3)
					point++;
				else
					base[i+1]=true;
			}
		}
	}
	base[0]=false;
}
int main(){
	IOS
	for(int i=0,n ; i<9 ; i++){
		cin>>n;
		bat_time=max(bat_time,n);
		for(int j=0 ; j<n ;  j++)
			cin>>stat[i][j];
	}
	cin>>b;
	for(int i=0 ; i<bat_time ; i++){
		for(int j=0 ; j<9 ; j++){
			if(stat[j][i][1] == 'O'){
				out++;
				out_tot++;
				if(out_tot == b){
					cout<<point<<"\n";
					return 0;
				}
				if(out == 3){
					memset(base,false,sizeof(base));
					out=0;
				}
			}
			else if(stat[j][i][0] == '1') run(1);
			else if(stat[j][i][0] == '2') run(2);
			else if(stat[j][i][0] == '3') run(3);
			else if(stat[j][i][0] == 'H') run(4);
			else break;
		}
	}
	return 0;
}

