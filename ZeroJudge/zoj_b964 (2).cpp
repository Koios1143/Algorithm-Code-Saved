//By Koios1143
#include<iostream>
#include<algorithm>
using namespace std;
void init(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}

int main(){
	init();
	int n,arr[10000];
	while(cin>>n){
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int not_first=-1,yes_end=-1;
		for(int i=0 ; i<n ; i++){
			if(arr[i]<60){
				not_first=arr[i];
			}
			else{
				yes_end=arr[i];
				break;
			}
		}
		for(int i=0 ; i<n ; i++){
			if(i)
				cout<<' ';
			cout<<arr[i];
		}
		cout<<'\n';
		if(not_first==-1){
			cout<<"best case\n";
			cout<<yes_end<<'\n';
		}
		else if(yes_end==-1){
			cout<<not_first<<'\n';
			cout<<"worst case\n";
		}
		else{
			cout<<not_first<<"\n";
			cout<<yes_end<<'\n';
		}
	}


	return 0;
}

