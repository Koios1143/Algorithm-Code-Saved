//by Koios1143
#include<iostream>
#include<vector>
using namespace std;
vector<int> v[3];
int n,m;
void hanoi(char a,char b,char c,int plate){
	//from a to c through b  move plates
	if(m<=0)
		return;
	if(plate==1){
		m--;
		//cout<<"move "<<plate<<" plates from "<<a<<" to "<<c<<"\n";
		int size;
		size=v[0].size();
		cout<<"A=>	";
		for(int i=0 ; i<size ; i++){
			if(i!=0)
				cout<<' ';
			cout<<v[0][i];
		}
		cout<<"\n";
		size=v[1].size();
		cout<<"B=>	";
		for(int i=0 ; i<size ; i++){
			if(i!=0)
				cout<<' ';
			cout<<v[1][i];
		}
		cout<<'\n';
		size=v[2].size();
		cout<<"C=>	";
		for(int i=0 ; i<size ; i++){
			if(i!=0)
				cout<<' ';
			cout<<v[2][i];
		}
		cout<<'\n';
		cout<<'\n';
		
		int tmp=v[a-'A'].back();
		v[a-'A'].pop_back();
		v[c-'A'].push_back(tmp);
		//return;
	}
	else{
			hanoi(a,c,b,plate-1);
			hanoi(a,b,c,1);
			hanoi(b,a,c,plate-1);
	}
	
}

int main(){
//---------------------------------
	#ifdef local
		freopen("UVa10017_in.txt","r",stdin);
		freopen("UVa10017_out.txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	int t=0;
	while(cin>>n>>m){
		if(n==0&&m==0)
			return 0;
		for(int i=0 ; i<3 ; i++){
			int size=v[i].size();
			while(size--)
				v[i].pop_back();
		}
		m++;
		t++;
		cout<<"Problem #"<<t<<"\n"<<"\n"<<"\n";
		for(int i=n ; i>0 ; i--){
			v[0].push_back(i);
		}
		hanoi('A','B','C',n);
	}
	
		
 return 0 ;
}

