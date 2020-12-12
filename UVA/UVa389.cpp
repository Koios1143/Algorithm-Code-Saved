//By Koios1143
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;
string s,x,y;
int tbl[128];
char tbl2[20];
void init(){
	for(int i=0 ; i<10 ; i++){
		tbl['0'+i]=i;
		tbl2[i]=(char)('0'+i);
	}
	for(int i=0 ; i<6 ; i++){
		tbl['A'+i]=10+i;
		tbl2[10+i]=(char)('A'+i);
	}
}
long long to_num(string ordi){
	long long ret=0;
	long long power=1;
	for(int i=ordi.size()-1 ; i>=0 ; i--){
		ret+=(tbl[ordi[i]])*power;
		power*=10;
	}
	return ret;
}
long long to_Dec(string ordi, int carry){
	long long to_num=0;
	long long power=1;
	for(int i=ordi.size()-1 ; i>=0 ; i--){
		to_num+=(tbl[ordi[i]])*power;
		power*=carry;
	}
	return to_num;
}
string change(long long ordi, int carry){
	string ret;
	while(ordi){
		ret = tbl2[ordi%carry] + ret;
		ordi/=carry;
	}
	return ret;
}
int main(){
	IOS;
	init();
	while(cin>>s>>x>>y){
		long long Dec;
		if(x!="10"){
			if(x=="11")
				Dec = to_Dec(s,11);
			else if(x=="12")
				Dec = to_Dec(s,12);
			else if(x=="13")
				Dec = to_Dec(s,13);
			else if(x=="14")
				Dec = to_Dec(s,14);
			else if(x=="15")
				Dec = to_Dec(s,15);
			else if(x=="16")
				Dec = to_Dec(s,16);
			else
				Dec = to_Dec(s,tbl[x[0]]);
		}
		else
			Dec = to_num(s);
		if(y=="10")
			s = change(Dec,10);
		else if(y=="11")
			s = change(Dec,11);
		else if(y=="12")
			s = change(Dec,12);
		else if(y=="13")
			s = change(Dec,13);
		else if(y=="14")
			s = change(Dec,14);
		else if(y=="15")
			s = change(Dec,15);
		else if(y=="16")
			s = change(Dec,16);
		else
			s = change(Dec,tbl[y[0]]);
		
		if(s.size()>7)
			cout<<"  ERROR\n";
		else if(s.size()==0)
			cout<<"      0\n";
		else{
			for(int i=0 ; i<7-s.size() ; i++)
				cout<<' ';
			cout<<s<<"\n";
		}
	}
	return 0;
}

