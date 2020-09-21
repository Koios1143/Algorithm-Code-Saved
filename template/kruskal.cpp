//by Koios1143
#include<iostream>
#include<algorithm>
using namespace std;
#define MaxN 1e6
struct edge{
	int pre,nxt,value;
};
bool operator < (edge l,edge r){
	return l.value<r.value;
}
int par[MaxN];
void _init(){
	for(int i=0 ; i<MaxN ; i++){
		par[i]=i;
	}
}
int find(int x){
	return x==p[x] ? x : find(p[x]);
}
void Union(int x,int y){
	p[find(x)]=p[find(y)];
}
void kruskal(){
	_init();
	sort(edge,edge+N);
	
	for(int i=0,j=0 ; i<V-1 && j<E ; j++){
		if(find(e[j].pre)==find(e[j].nxt)){
			continue;
		}
		Union(e[j].pre,e[j].nxt);
		i++;
	}
}
int main(){
	
	
		
 return 0 ;
}

