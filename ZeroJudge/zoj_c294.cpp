//By Koios1143
#include<bits/stdc++.h>
#define LL long long
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define pii pair<int,int>
using namespace std;
int tri[3];
int main(){
	IOS
	for(int i=0 ; i<3 ; i++) cin>>tri[i];
	sort(tri,tri+3);
	cout<<tri[0]<<" "<<tri[1]<<" "<<tri[2]<<"\n";
	if(tri[0]+tri[1] <= tri[2])
		cout<<"No\n";
	else if(pow(tri[0],2)+pow(tri[1],2) == pow(tri[2],2))
		cout<<"Right\n";
	else if(pow(tri[0],2)+pow(tri[1],2) < pow(tri[2],2))
		cout<<"Obtuse\n";
	else
		cout<<"Acute\n";
	return 0;
}

