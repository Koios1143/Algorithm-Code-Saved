//by Koios1143
#include<iostream>
using namespace std;
int table[71];
char table2[17];
long long ntod(string s,int n){
	long long ans=0;
	int size=s.size();
	for(int i=0 ; i<size ; i++){
		ans*=n;
		ans+=table[(int)s[i]];
	}
	return ans;
}

string dton(long long s,int n){
	string ans;
	while(s){
		ans=table2[s%n]+ans;
		s/=n;
	}
	if(ans.size()==0)
		ans="0";
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	for(int i=0 ; i<10 ; i++){
		table[48+i]=i;
		table2[i]='0'+i;
		//cout<<"table["<<48+i<<"]="<<i<<"\n";
	}
	for(int i=0 ; i<7 ; i++){
		table['A'+i]=10+i;
		table2[10+i]='A'+i;
		//cout<<"table["<<'A'+i<<"="<<10+i<<"\n";
	}
	
	
	long long n,m,n1,m1;
	string s1;
	string s;
	while(cin>>n>>m>>s){
		
		int size=s.size();
		bool YN=true;
		for(int i=0 ; i<size ; i++){
			if(table[s[i]]>=n){
				cout<<s<<" is an illegal base "<<n<<" number\n";
				YN=false;
				break;
			}
		}
		if(!YN)
			continue;
		
		n1=n,m1=m,s1=s;
		n=ntod(s,n);
		s=dton(n,m);
		cout<<s1<<" base "<<n1<<" = "<<s<<" base "<<m1<<"\n";
	}
 return 0 ;
}

