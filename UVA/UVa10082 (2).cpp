#include<iostream> 
using namespace std;
string tbl="`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./'";
string s;
int main(){
	while(getline(cin,s)){
		for(int i=0 ; i<s.size() ; i++){
			if(s[i]==' ')
				cout<<" ";
			else{
				for(int j=0 ; j<tbl.size() ; j++){
					if(s[i]==tbl[j]){
						cout<<tbl[j-1];
						break;
					}
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}

