//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
string A,B;
char oper;

string add(string A,string B){
	string ans="";
	int add=0;
	for(int i=A.size()-1, j=B.size()-1 ; i>=0 || j>=0 ; i--, j--){
		int tmp_tot;
		if(i>=0 && j>=0){
			tmp_tot=A[i]-'0' + B[j]-'0';
		}
		else if(i<0){
			tmp_tot=B[j]-'0';
		}
		else{
			tmp_tot=A[i]-'0';
		}
		tmp_tot += add;
		add = tmp_tot/10;
		ans = (char)('0'+tmp_tot%10) + ans;
	}
	if(add>0){
		ans = (char)('0'+add) + ans;
	}
	return ans;
}
string minus(string A,string B){
	string ans="";
	bool nagetive=false;
	if(A.size()<B.size()){
		nagetive=true;
		swap(A,B);
	}
	else if(A.size() == B.size() && A[0]<B[0]){
		nagetive=true;
		swap(A,B);
	}
	int add=0;
	for(int i=0, j=0 ; i<A.size() && <B.size() ;){
		int tmp_minus;
		if(A.size()-i == B.size()-j){
			tmp_minus=A[i]-'0' - B[j]-'0';
			i++,j++;
		}
		else if(A.size()-i > B.size()-j){
			tmp_minus=A[i]-'0';
		}
		tmp_minus += add;
		if(tmp_minus<0){
			if(i+1)
		}
	}
}
int main(){
	//init();
	while(cin>>A>>oper>>B){
		if(oper == '+'){
			cout<<add(A,B)<<'\n';
		}
		else if(oper == '-'){
			minus(A,B);
		}
		else if(oper == '*'){
			//mul(A,B);
		}
		else if(oper == '/'){
			//div(A,B);
		}
	}


	return 0;
}

