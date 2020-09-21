//By Koios1143
#include<iostream>
#include<algorithm>
using namespace std;
int n,m,age;
string name,name2;
pair<int,pair<int,string>> cat[10005];
bool cmp(pair<int,pair<int,string>> p1, pair<int,pair<int,string>> p2){
    if(p1.first!=p2.first){
        return p1.first<p2.first;
    }
    else{
        if(p1.second.first!=p2.second.first){
            return p1.second.first<p2.second.first;
        }
        else{
            return p1.second.second<p2.second.second;
        }
    }
}
int main(){
    while(cin>>n>>m){
	    for(int i=0 ; i<n ; i++){
	        cin>>name2>>name>>age;
	        if(name=="elder"){
	            cat[i].first=1;
	            cat[i].second.first=-age;
	            cat[i].second.second=name2;
	        }
	        else if(name=="nursy"){
	            cat[i].first=2;
	            cat[i].second.first=-age;
	            cat[i].second.second=name2;
	        }
	        else if(name=="kit"){
	            cat[i].first=3;
	            cat[i].second.first=-age;
	            cat[i].second.second=name2;
	        }
	        else if(name=="warrior"){
	            cat[i].first=4;
	            cat[i].second.first=-age;
	            cat[i].second.second=name2;
	        }
	        else if(name=="appentice"){
	            cat[i].first=5;
	            cat[i].second.first=age;
	            cat[i].second.second=name2;
	        }
	        else if(name=="medicent"){
	            cat[i].first=6;
	            cat[i].second.first=-age;
	            cat[i].second.second=name2;
	        }
	        else if(name=="deputy"){
	            cat[i].first=7;
	            cat[i].second.first=-age;
	            cat[i].second.second=name2;
	        }
	        else if(name=="leader"){
	            cat[i].first=8;
	            cat[i].second.first=-age;
	            cat[i].second.second=name2;
	        }
		}
	    sort(cat,cat+n,cmp);
	    m=min(n,m);
	    for(int i=0 ; i<m ; i++){
	        cout<<cat[i].second.second<<"\n";
	    }
	}
    return 0;
}
