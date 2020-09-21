//By Koios1143
#include<iostream>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
char a,b;
int main(){
	init();
	string colors="CDHS";
	string numbers="A23456789TJQK";
	cin>>a>>b;
	if(a=='S' && b=='K'){
		cout<<"IMPOSSIBLE\n";
	}
	else{
		if(a=='S'){
			int i;
			for(i=0 ; i<13 ; i++){
				if(numbers[i]==b){
					i++;
					break;
				}
			}
			cout<<"C "<<numbers[i]<<"\n";
		}
		else{
			int i;
			for(i=0 ; i<4 ; i++){
				if(colors[i]==a){
					i++;
					break;
				}
			}
			cout<<colors[i]<<" "<<b<<"\n";
		}
	}
	return 0;
}

