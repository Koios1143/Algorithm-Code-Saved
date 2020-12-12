#include<iostream>
#include<cmath>
using namespace std;
int n,m;
int main(){
	cin>>n;
	bool out=false;
	while(n--){
		if(out) cout<<"\n";
		else out=true;
		cin>>m;
		int cnt=-1;
		bool done=true;
		for(int i=0,x,y ; i<m ; i++){
			cin>>x>>y;
			if(cnt==-1) cnt=abs(x-y);
			else if(cnt!=abs(x-y))
				done=false;
		}
		if(done)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}
