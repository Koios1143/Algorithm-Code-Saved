#include<iostream> 
using namespace std;
string s;
int cnt=0,tmp;
int get_num(char c){
	if(c>='A'&&c<='H')
		return 10+(c-'A');
	else if(c=='I')
		return 34;
	else if(c>='J' && c<='N')
		return 18+(c-'J');
	else if(c=='O')
		return 35;
	else if(c>='P' && c<='V')
		return 23+(c-'P');
	else if(c=='W')
		return 32;
	else if(c=='X')
		return 30;
	else if(c=='Y')
		return 31;
	else if(c=='Z')
		return 33;
}
int main(){
	cin>>s;
	tmp=get_num(s[0]);
	cnt+=(tmp/10)+(tmp%10)*9;
	for(int i=1, T=8 ; i<s.size() ; i++,T--){
		if(T==0)
			cnt+=s[i]-'0';
		cnt+=(s[i]-'0')*T;
	}
	if(cnt%10==0)
		cout<<"real\n";
	else
		cout<<"fake\n";
	return 0;
}

