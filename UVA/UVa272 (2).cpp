//by Koios1143
#include<iostream>
#include<sstream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	bool AB=true;
	while(getline(cin,s)){
		stringstream ss;
		ss<<s;
		string tmp;
		bool first=true;
		while(ss>>tmp){
			if(first)
				first=!first;
			else
				cout<<" ";
			int size=tmp.size();
			for(int i=0 ; i<size ; i++){
				if(tmp[i]=='\"'){
					if(AB){
						cout<<"``";
					}
					else{
						cout<<"''";
					}
					AB=!AB;
				}
				else{
					cout<<tmp[i];
				}
			}
		}
		cout<<"\n";
	}
 return 0 ;
}

