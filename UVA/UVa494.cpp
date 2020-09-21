#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	while(getline(cin,s)){
		int cnt=0;
		int size=s.size();
		bool YN=false;
		for(int i=0 ; i<size ; i++){
			if(isalpha(s[i])&&!YN){
				YN=true;
				cnt++;
			}
			else if(!isalpha(s[i])&&YN){
				YN=false;
			}
		}
		cout<<cnt<<"\n";
	}
 return 0 ;
}

