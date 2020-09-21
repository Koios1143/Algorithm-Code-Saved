//by Koios1143
#include<iostream>
using namespace std;
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
	string s;
	while(getline(cin,s)){
		int ans=0;
		if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z'))
			ans++;
		for(int i=1 ; i<s.size() ; i++){
			if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))&&(!(s[i-1]>='a'&&s[i-1]<='z')&&!(s[i-1]>='A'&&s[i-1]<='Z')))
				ans++;
		}
		cout<<ans<<'\n';
	}
	
		
 return 0 ;
}

