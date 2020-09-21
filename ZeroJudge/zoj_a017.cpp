//By Koios1143
#include<iostream>
#include<sstream>
#include<stack>
#define int long long
using namespace std;
string s,s2;
stack<int> res;
stack<string> tmp;
void opt(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
void init(){
	s2="";
	while(!res.empty()){
		res.pop();
	}
	while(!tmp.empty()){
		tmp.pop();
	}
}
int pri(string a){
	if(a=="(" || a==")")
		return 0;
	else if(a=="+" || a=="-")
		return 1;
	else
		return 2;
}
bool is_operator(string a){
	return (a=="+" || a=="-" || a=="*" || a=="/" || a=="%");
}
int string_to_int(string s){
	if(s=="0")
		return 0;
	else{
		int res=0;
		for(unsigned int i=0 ; i<s.size() ; i++){
			res*=10;
			res+=(s[i]-'0');
		}
		return res;
	}
}
int calc(int A,string opr,int B){
	cout<<A<<' '<<opr<<' '<<B<<'\n';
	if(opr=="+")
		return A+B;
	else if(opr=="-")
		return A-B;
	else if(opr=="*")
		return A*B;
	else if(opr=="/")
		return A/B;
	else if(opr=="%")
		return A%B; 
	else
		return -1;
}
void process_opr(){
	int A=res.top();
	res.pop();
	int B=res.top();
	res.pop();
	int C = calc(B,tmp.top(),A);
	res.push(C);
	tmp.pop();
}
signed main(){
	//先轉後序後計算 
	//opt();
	while(getline(cin,s)){
		init();
		stringstream ss;
		ss<<s;
		while(ss>>s2){
			if(s2=="("){
				tmp.push(s2);
			}
			else if(s2 == ")"){
				while(tmp.top() != "("){
					process_opr();
				}
				if(tmp.top() == "(")
					tmp.pop();
			}
			else if(is_operator(s2)){
				while(!tmp.empty() && pri(tmp.top()) > pri(s2)){
					cout<<tmp.top()<<" in tmp.top()\n";
					process_opr();
				}
				tmp.push(s2);
			}
			else{
				res.push(string_to_int(s2));
			}
		}
		while(!tmp.empty()){
			process_opr();
		}
		cout<<res.top()<<'\n';
	}
	return 0;
}

