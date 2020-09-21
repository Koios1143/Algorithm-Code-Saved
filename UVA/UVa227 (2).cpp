//by Koios1143
#include<iostream>
using namespace std;
int main(){
//---------------------------------
	#ifdef local
		freopen("227_in.txt","r",stdin);
		freopen("227_out.txt","w",stdout);
	#endif
	/*ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);*/
//---------------------------------
	string s;
	int times=0;
	while(getline(cin,s)){
		//cout<<s<<"__\n";
		char arr[5][5];
		times++;
		int x=0,y=0;
		if(s=="Z")
			return 0;
		cout<<"Puzzle #"<<times<<":\n";
		for(int i=0 ; i<5 ; i++){
			if(i!=0)
				getline(cin,s);
				//cout<<s<<"___\n";
			for(int j=0 ; j<5 ; j++){
				arr[i][j]=s[j];
				if(arr[i][j]==' '){
					x=i,y=j;
				}
			}
		}
		//cout<<"ordixy: "<<x<<" "<<y<<"\n";
		//cout<<"X:"<<x<<" y:"<<y<<"\n";
		//system("pause");
		char c;
		bool end=false;
		while(c=getchar()){
			if(c=='0')
				break;
			if(end)
				continue;
			if(c=='A'){
				if(x-1<0){
					end=true;
					//cout<<x<<" "<<y<<"__\n";
					continue;
				}
				swap(arr[x][y],arr[x-1][y]);
				x--;
			}
			else if(c=='B'){
				if(x+1>4){
					end=true;
					//cout<<x<<" "<<y<<"\n";
					continue;
				}
				swap(arr[x][y],arr[x+1][y]);
				x++;
			}
			else if(c=='L'){
				if(y-1<0){
					end=true;
					//cout<<x<<" "<<y<<"__\n";
					continue;
				}
				swap(arr[x][y],arr[x][y-1]);
				y--;
			}
			else if(c=='R'){
				if(y+1>4){
					end=true;
					//cout<<x<<" "<<y<<"\n";
					continue;
				}
				swap(arr[x][y],arr[x][y+1]);
				y++;
			}
		}
		if(end)
			cout<<"This puzzle has no final configuration.\n";
		else{
			for(int i=0 ; i<5 ; i++){
				for(int j=0 ; j<5 ; j++){
					if(j!=0)
						cout<<' ';
					cout<<arr[i][j];
				}
				cout<<'\n';
			}
		}
		if(times!=0)
			cout<<"\n";
		getchar();
	}
	
	
		
 return 0 ;
}

