//By Koios1143
#include<iostream>
using namespace std;
int main(){
	int s,t,n,l,Case=1;
	while(cin>>s>>t>>n && (s!=0 && t!=0 && n!=0)){
		cout<<"Case "<<Case++<<":\n";
		l=s*n+t*(n+1);
		for(int k=0 ; k<n ; k++){
			for(int i=0 ; i<t ; i++){
				for(int j=0 ; j<l ; j++){
					cout<<'*';
				}
				cout<<"\n";
			}
			for(int i=0 ; i<s ; i++){
				for(int j=0 ; j<n ; j++){
					for(int p=0 ; p<t ; p++){
						cout<<'*';
					}
					for(int p=0 ; p<s ; p++){
						cout<<'.';
					}
				}
				for(int j=0 ; j<t ; j++){
					cout<<'*';
				}
				cout<<"\n";
			}
		}
		for(int i=0 ; i<t ; i++){
			for(int j=0 ; j<l ; j++){
				cout<<'*';
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}

