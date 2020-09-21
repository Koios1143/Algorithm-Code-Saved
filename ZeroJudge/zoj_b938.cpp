//by Koios1143
#include<iostream>
#include<list> 
using namespace std;
int n,m;
int main(){
//---------------------------------
	#ifdef local
		//freopen(".txt","r",stdin);
		//freopen(".txt","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//---------------------------------
	list<int> l;
	while(cin>>n>>m){
		for(int i=1 ; i<=n ; i++){
			l.push_back(i);
		}
		for(int i=0,tmp ; i<m ; i++){
			cin>>tmp;
			bool found=false,out=false;
			list<int>::iterator iter;
			for(iter=l.begin() ; iter!=l.end() ; iter++){
				if(found){
					cout<<*iter<<'\n';
					l.erase(iter);
					out=true;
					break;
				}
				if(*iter==tmp){
					found=true;
				}
			}
			if(!out){
				cout<<"0u0 ...... ?\n";
			}
		}	
	}
	
	
		
 return 0 ;
}

