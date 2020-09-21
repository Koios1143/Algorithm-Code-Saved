//by Koios1143
#include<iostream>
#include<stack>
using namespace std;
int n,arr[1000010];
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
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
	int ans=0;
	stack<pair<int,int>>s;
	for(int i=0 ; i<n ; i++){
		int tmpp=0;
		if(s.empty()){
			s.push(make_pair(arr[i],1));
			//cout<<"push "<<arr[i]<<" "<<1<<"\n";
			continue;
		}
		if(arr[i]==s.top().first){
			//pair<int,int>tmp={arr[i],s.top().second+1};
			//cout<<"pop "<<s.top().first<<"\n";
			tmpp=s.top().second;
			s.pop();
			//s.push(tmp);
			ans++;
			//cout<<"__push "<<tmp.first<<" "<<tmp.second<<"\n";
			//cout<<"ans++ "<<ans<<"\n";
		}
		if(arr[i]<s.top().first){
			s.push(make_pair(arr[i],1+tmpp));
			ans++;
			//cout<<"push "<<arr[i]<<" "<<1+tmpp<<"\n";
			//cout<<"ans++ "<<ans<<"\n";
		}
		else{
			int tmp=0;
			while(!s.empty()){
				if(s.top().first<arr[i]){
					ans++;
					//cout<<s.top().first<<" < "<<arr[i]<<"\n";
					//cout<<"ans++ "<<ans<<"\n";
					//cout<<"pop "<<s.top().first<<"\n";
					s.pop();
				}
				else if(s.top().first>arr[i]){
					ans++;
					//cout<<s.top().first<<" > "<<arr[i]<<"\n";
					//cout<<"ans++ "<<ans<<"\n";
					s.push(make_pair(arr[i],1+tmpp));
					//cout<<"push "<<arr[i]<<" "<<1+tmpp<<"\n";
					break;
				}
				else{
					tmp=0;
					while(s.top().first==arr[i]){
						tmp++;
						ans++;
						//cout<<s.top().first<<" == "<<arr[i]<<"\n";
						//cout<<"ans++ "<<ans<<"\n";
						//cout<<"pop "<<s.top().first<<"\n"; 
						s.pop();
					}
					s.push(make_pair(arr[i],1+tmp+tmpp));
					//cout<<"push "<<arr[i]<<" "<<1+tmp+tmpp<<"\n";
					//cout<<"__size "<<s.size()<<"\n";
					//s.push(make_pair(arr[i],tmp+tmpp))
				}
			}
		}
	}
//	stack<pair<int,int>> ss;
//	for(int i=n-1 ; i>=0 ; i--){
//		int tmpp=0;
//		if(ss.empty()){
//			ss.push(make_pair(arr[i],1));
//			cout<<"push "<<arr[i]<<" "<<1<<"\n";
//			continue;
//		}
//		if(arr[i]==ss.top().first){
//			//pair<int,int>tmp={arr[i],s.top().second+1};
//			cout<<"pop "<<ss.top().first<<"\n";
//			tmpp=ss.top().second;
//			ss.pop();
//			//s.push(tmp);
//			ans++;
//			//cout<<"__push "<<tmp.first<<" "<<tmp.second<<"\n";
//			cout<<"ans++ "<<ans<<"\n";
//		}
//		if(arr[i]<ss.top().first){
//			ss.push(make_pair(arr[i],1+tmpp));
//			ans++;
//			cout<<"push "<<arr[i]<<" "<<1+tmpp<<"\n";
//			cout<<"ans++ "<<ans<<"\n";
//		}
//		else{
//			int tmp=0;
//			while(!ss.empty()){
//				if(ss.top().first<arr[i]){
//					ans++;
//					cout<<ss.top().first<<" < "<<arr[i]<<"\n";
//					cout<<"ans++ "<<ans<<"\n";
//					cout<<"pop "<<ss.top().first<<"\n";
//					ss.pop();
//				}
//				else if(ss.top().first>arr[i]){
//					ans++;
//					cout<<ss.top().first<<" > "<<arr[i]<<"\n";
//					cout<<"ans++ "<<ans<<"\n";
//					ss.push(make_pair(arr[i],1+tmpp));
//					cout<<"push "<<arr[i]<<" "<<1+tmpp<<"\n";
//					break;
//				}
//				else{
//					tmp=0;
//					while(ss.top().first==arr[i]){
//						tmp++;
//						ans++;
//						cout<<ss.top().first<<" == "<<arr[i]<<"\n";
//						cout<<"ans++ "<<ans<<"\n";
//						cout<<"pop "<<ss.top().first<<"\n"; 
//						ss.pop();
//					}
//					ss.push(make_pair(arr[i],1+tmp+tmpp));
//					cout<<"push "<<arr[i]<<" "<<1+tmp+tmpp<<"\n";
//					cout<<"__size "<<ss.size()<<"\n";
//					//s.push(make_pair(arr[i],tmp+tmpp))
//				}
//			}
//		}
//	}
	cout<<ans*2<<"\n";
		
 return 0 ;
}

