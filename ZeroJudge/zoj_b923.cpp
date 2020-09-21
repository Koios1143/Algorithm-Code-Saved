//by Koios1143
#include<iostream>
#include<stack>
using namespace std;
int n;
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
	while(cin>>n){
		stack<int>s; 
		for(int i=0,a,b ; i<n ; i++){
			cin>>a;
			if(a==1 && !s.empty()){
				s.pop();
			}
			else if(a==2 && !s.empty()){
				cout<<s.top()<<"\n";
			}
			else if(a==3){
				cin>>b;
				s.push(b);
			}
		}
	}
	
	
		
 return 0 ;
}

