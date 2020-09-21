//by Koios1143
#include<iostream>
using namespace std;
int key;
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
	cin>>key;
	string s;
	while(cin>>s){
		int num;
		if(s[0]=='X')
			num=1;
		else
			num=0;
		for(int i=1 ; i<7 ; i++){
			num<<=1;
			if(s[i]=='X')
				num+=1;
		}
		num^=key;
		cout<<char(num);
	}
	
		
 return 0 ;
}

