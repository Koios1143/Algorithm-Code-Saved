//By Koios1143
#include<iostream>
#include<vector>
using namespace std;
struct dot{
	vector<int> next;
}dots[3100];
int t,n,m,k;bool travaled[3100];
vector<int> all_dots;

int dp(int n,int m){
	if(dots[n].next.size()==0)
		return (m==1) ? 0 : 1;
	int tot=0;
	for(auto i : dots[n].next){
		if(travaled[i]){
			if(m)
				continue;
			else{
				tot++;
				continue;
			}
		}
		travaled[i]=true;
		int tmp_res=dp(i,(m==1) ? 0 : 1);
		tot+=tmp_res;
	}
	if(m)
		tot++;
	cout<<"dot "<<n<<" "<<tot<<"\n";
	return tot;
}
dot empty;
int main(){
	cin>>t;
	while(t--){
		for(int i=0 ; i<3100 ; i++){
			travaled[i]=false;
			dots[i]=empty;
		}
		all_dots.clear();
		//xi yi zones
		cin>>n>>m>>k;
		for(int i=0,a,b ; i<k ; i++){
			//xi yi
			cin>>a>>b;
			dots[a].next.push_back(b);
			dots[b].next.push_back(a);
			all_dots.push_back(a);
			//all_dots.push_back(b);
		}
		int ans=0;
		for(auto i : all_dots){
			if(travaled[i])
				continue;
			int tmp_res=min(dp(i,1),dp(i,0)+1);
			ans+=tmp_res;
		}
		cout<<ans<<'\n';
	}


	return 0;
}

