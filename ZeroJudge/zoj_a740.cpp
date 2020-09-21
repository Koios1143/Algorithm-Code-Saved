//By Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int prime_table[200000000];
void build_table(){
	table[0] = table[1] = 1;
	for(int i=2 ; i<200000000 ; i++){
		for(int j=i*i ; j<200000000 ; j+=i){
			
		}
	}
}
int main(){
	init();



	return 0;
}

