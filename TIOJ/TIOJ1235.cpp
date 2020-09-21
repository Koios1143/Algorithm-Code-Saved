//By Koios1143
#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
char arr[9][9],new_arr[9][9],input,var[9]={'R','O','Y','G','B','I','P','L','W'};
bool used_rect[9][128];
bool used_row[9][128];
bool used_col[9][128];
vector<pii> emp;
int get_rect(int x,int y){
	if(x<3){
		if(y<3) return 0;
		else if(y<6) return 1;
		else return 2;
	}
	else if(x<6){
		if(y<3) return 3;
		else if(y<6) return 4;
		else return 5;
	}
	else{
		if(y<3) return 6;
		else if(y<6) return 7;
		else return 8;
	}
}
bool dfs(){
	if(emp.empty())
		return true;
	int x,y;
	tie(x,y)=emp.back();
	emp.pop_back();
	for(int i=0 ; i<9 ; i++){
		if(!used_rect[get_rect(x,y)][var[i]] && !used_row[y][var[i]] && !used_col[x][var[i]]){
			new_arr[x][y]=var[i];
			used_rect[get_rect(x,y)][var[i]] = used_row[y][var[i]] = used_col[x][var[i]] = true;
			if(dfs()) return true;
			used_rect[get_rect(x,y)][var[i]] = used_row[y][var[i]] = used_col[x][var[i]] = false;
			new_arr[x][y]='*';
		}
	}
	emp.emplace_back(x,y);
	return false;
}
int main(){
	for(int i=0 ; i<9 ; i++){
		for(int j=0 ; j<9 ; j++){
			cin>>input;
			arr[i][j]=input;
			if(input=='*'){
				emp.emplace_back(i,j);
			}
			used_rect[get_rect(i,j)][input]=true;
			used_row[j][input]=true;
			used_col[i][input]=true;
		}
	}
	dfs();
	for(int i=0 ; i<9 ; i++){
		for(int j=0 ; j<9 ; j++){
			if(arr[i][j] == '*')
				cout<<new_arr[i][j];
		}
		cout<<'\n';
	}
	return 0;
}

