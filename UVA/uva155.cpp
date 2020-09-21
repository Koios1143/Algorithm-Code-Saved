//by Koios1143
#include<iostream>
using namespace std;
int k,x,y,cnt=0;
void rec(int midx,int midy,int len){
	len/=2;
	int lx=midx-len,rx=midx+len;
	int ay=midy+len,by=midy-len;
	if(len<=0)
		return;
	//cout<<midx<<" "<<midy<<"\n";
	if(x>=lx && x<=rx && y>=by && y<=ay){
		cnt++;
	}
	if(lx>=0 && lx<=2048){
		if(ay<=2048 && ay>=0)
			rec(lx,ay,len);
		if(by<=2048 && by>=0)
			rec(lx,by,len);
	}
	if(rx>=0 && rx<=2048){
		if(ay<=2048 && ay>=0)
			rec(rx,ay,len);
		if(by<=2048 && by>=0)
			rec(rx,by,len);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	while(cin>>k>>x>>y && !(k==0 && x==0 && y==0)){
		cnt=0;
		rec(2049/2,2049/2,2*k+1);
		cout<<"  "<<cnt<<"\n";
	}
		
 return 0 ;
}

