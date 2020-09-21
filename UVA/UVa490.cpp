//by Koios1143
#include<iostream>
using namespace std;
string arr[110];
char blank;
char tab='	';
int main(){
//---------------------------------
	#ifdef local
		freopen("UVa490_in.txt","r",stdin);
		freopen("UVa490_out.txt","w",stdout);
	#endif
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//---------------------------------

	string s;
	int times=0,max=0;
	while(getline(cin,s)){
		string s2;
		for(int i=0 ; i<s.size() ; i++){
			if(s[i]!=0 && s[i]!=9)
				s2+=s[i];
			else
				s2+=' ';
		}
		for(int i=s.size() ; i<100 ; i++){
			s2+=' ';
		}
		arr[times]=s2;
		if(s.size()>max)
			max=s.size();
		times++;
	}
	for(int i=0 ; i<max ; i++){
		for(int j=times-1 ; j>=0 ; j--){
				cout<<arr[j][i];
		}
		cout<<'\n';
	}
 return 0 ;
}

