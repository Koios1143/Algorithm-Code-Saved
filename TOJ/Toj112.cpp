#include<stdio.h>
void rec(short n){
	short tmp;
	scanf("%hd",&tmp);
	if(n) rec(n-1);
	printf("%hd\n",tmp);
}
int main(){
	short m;
	scanf("%hd",&m);
	rec(m-1);
 return 0 ;
}

