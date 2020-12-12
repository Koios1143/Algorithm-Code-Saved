//By Koios1143
#include<iostream>
#include<cmath>
using namespace std;
int n, cnt=0;
int main(){
	cout<<"PERFECTION OUTPUT\n";
	while(cin>>n && n){
		cnt=0;
		for(int i=1 ; i<n ; i++){
			if(n%i==0){
				cnt+=i;
			}
		}
		for(int i=0, p=5-((int)log10(n)+1) ; i<p ; i++){
			cout<<' ';
		}
		cout<<n<<"  ";
		if(cnt==n){
			cout<<"PERFECT\n";
		}
		else if(cnt<n){
			cout<<"DEFICIENT\n";
		}
		else{
			cout<<"ABUNDANT\n";
		}
	}
	cout<<"END OF OUTPUT\n";
	return 0;
}
