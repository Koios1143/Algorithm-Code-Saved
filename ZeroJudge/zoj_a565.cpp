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
	cin>>n;
	while(n--){
		string s;
		int ans=0;
		cin>>s;
		stack<char> st;
		int size=s.size();
		for(int i=0 ; i<size ; i++){
			if(s[i]=='p'){
				st.push(s[i]);
			}
			else if(s[i]=='q' && !st.empty()){
				st.pop();
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
	
		
 return 0 ;
}

