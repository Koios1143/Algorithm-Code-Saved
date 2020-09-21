//by Koios1143
#include<iostream>
using namespace std;
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
	int n;
	while(cin>>n&&n){
		getchar();
		int min=26;
		int all=0;
		for(int j=0 ; j<n ; j++){
			int cnt=0;
			char s[25];
			gets(s);
			for(int i=0 ; i<25 ;  i++){
				if(s[i]!='X')
					cnt++;
			}
			all+=cnt;
			if(cnt<min)
				min=cnt;
		}
		//cout<<"max:"<<max<<" min:"<<min<<"\n";
		cout<<all-min*n<<"\n";
	}
	
		
 return 0 ;
}

