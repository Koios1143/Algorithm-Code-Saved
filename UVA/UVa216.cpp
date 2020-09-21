//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
#define pdd pair<double,double>
using namespace std;
const int MaxN = 100;
vector<pdd>ans;//answer path
vector<pdd>Tmp;//dfs path
vector<pdd>v;//input vectors
bool vis[100];
int n,times=0;double Min_path = 2147483647.0;

//return the distance
double dis(double x1,double y1,double x2,double y2){
	return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

//print answer path
void print_ans(){
	double x1,y1;
	x1=ans[0].first;
	y1=ans[0].second;
	for(int i=1 ; i<n ; i++){
		double x2,y2;
		x2=ans[i].first;
		y2=ans[i].second;
		cout<<fixed<<setprecision(0)<<"Cable requirement to connect ("<<x1<<","<<y1<<") to ("<<x2<<","<<y2<<") is "<<fixed<<setprecision(2)<<dis(x1,y1,x2,y2)+16<<" feet.\n"; 
		x1=x2,y1=y2;
	}
	cout<<fixed<<setprecision(2)<<"Number of feet of cable required is "<<Min_path<<".\n";
}

//dfs find Min path
void dfs(int depth, double path){
	if(depth == n){
		if(path<Min_path){
			Min_path = path;
			ans.clear();
			ans = Tmp;
		}
		return;
	}
	for(int i=0 ; i<n ; i++){
		if(!vis[i]){
			vis[i]=true;
			Tmp.emplace_back(v[i].first, v[i].second);
			if(depth == 0){
				dfs(depth+1,0);
			}
			else{
				dfs(depth+1, path+dis(Tmp[depth-1].first, Tmp[depth-1].second, v[i].first, v[i].second)+16);
			}
			Tmp.pop_back();
			vis[i]=false;
		}
	}
}
void print_star(){
	cout<<"**********************************************************\n";
}
int main(){
	IOS
	while(cin>>n && n){
		print_star();
		cout<<"Network #"<<++times<<"\n";
		ans.clear();
		v.clear();
		Tmp.clear();
		memset(vis,sizeof(vis),false);
		Min_path = 2147483647.0;
		double x,y;
		for(int i=0 ; i<n ; i++){
			cin>>x>>y;
			v.emplace_back(x,y);
		}
		dfs(0,0); 
		print_ans();
	}
	return 0;
}

