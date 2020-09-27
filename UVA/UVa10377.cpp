//By Koios1143
#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
char arr[65][65],op,dir[4]={'N','E','S','W'};
int t,n,m,x,y,face=0;
string s;
int main(){
	#ifdef local
		freopen("out.txt","w",stdout);
	#endif
	cin>>t;
	while(t--){
		cin>>n>>m;
		getchar();
		face = 0;
		for(int i=1 ; i<=n ; i++){
			getline(cin,s);
			for(int j=1 ; j<=s.size() ; j++){
				arr[i][j] = s[j-1];
			}
		}
		cin>>x>>y;
		while(cin>>op && op!='Q'){
			if(op=='R'){
				face = (face+1)%4; 
			}
			else if(op=='L'){
				face--;
				if(face<0)
					face = 3;
			}
			else if(op=='F'){
				switch(dir[face]){
					case 'N':{
						if(x && arr[x-1][y]==' '){
							x--;
						}
						break;
					}
					case 'E':{
						if(y+1<=m && arr[x][y+1]==' '){
							y++;
						}
						break;
					}
					case 'S':{
						if(x+1<=n && arr[x+1][y]==' '){
							x++;
						}
						break;
					}
					case 'W':{
						if(y && arr[x][y-1]==' '){
							y--;
						}
						break;
					}
				}
			}
		}
		cout<<x<<" "<<y<<" "<<dir[face]<<'\n';
		if(t) cout<<'\n';
	}

	return 0;
}

