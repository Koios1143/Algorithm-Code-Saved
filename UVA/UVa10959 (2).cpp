//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int n,p,d,don[1005],Min[1005];
int main(){
	IOS
	cin>>n;
	bool out=false;
	while(n--){
		if(out)
			cout<<"\n";
		else
			out=true;
		for(int i=0 ; i<1005 ; i++){
			Min[i]=2147483647;
			don[i]=0;
		}
		cin>>p>>d;
		for(int i=0,a,b ; i<d ; i++){
			cin>>a>>b;
			if(a>b)swap(a,b);
			if(a==0){
				don[b]=1;
				Min[b]=1;
			}
			else{
				int tmpA=don[a],tmpB=don[b];
				if(Min[b]>don[a]){
					tmpB=don[a]+1;
				}
				if(Min[a]>don[b]){
					tmpA=don[b]+1;
				}
				Min[a]=min(Min[a],don[b]);
				Min[b]=min(Min[b],don[a]);
				don[a]=tmpA;
				don[b]=tmpB;
			}
			cout<<"don["<<a<<"]="<<don[a]<<"\n";
			cout<<"don["<<b<<"]="<<don[b]<<"\n";
		}
		for(int i=1 ; i<p ; i++)
			cout<<don[i]<<'\n';
	}
	
	return 0;
}

