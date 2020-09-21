//by Koios1143
#include<iostream>
#include<memory.h>
using namespace std;
bool prime[1000010];
void _init(){
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;
	for(int i=2 ; i<1000010 ; i++){
		if(!prime[i])
			continue;
		prime[i]=true;
		for(int j=i+i ; j<1000010 ; j+=i){
			prime[j]=false;
		}
	}
}
int main(){
//---------------------------------
	#ifdef local
		//freopen(".txt","r",stdin);
		//freopen(".txt","w",stdout);
	#endif
	/*ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);*/
//---------------------------------
	_init();
	int n;
	while(cin>>n){
		int times=0,num=2;
		bool out=false;
		for(int i=2 ; i<=n ; ){
			if(!prime[i]){
				i++;
				continue;
			}
			else{
				if(n%i==0){
					while(n%i==0){
						times++;
						n/=i;
					}
					if(times>1){
						if(out){
							cout<<" * "<<i<<"^"<<times;
							times=0;
							i++;
							continue;
						}
						else{
							cout<<i<<"^"<<times;
							out=true;
							times=0;
						}
					}
					else if(times==1){
						if(out){
							cout<<" * "<<i;
							i++;
							times=0;
							continue;
						}
						else{
							cout<<i;
							i++;
							times=0;
							out=true;
							continue;
						}
					}
				}
				else{
					i++;
					continue;
				}
			}
		}
		cout<<"\n";
	}
	
		
 return 0 ;
}

