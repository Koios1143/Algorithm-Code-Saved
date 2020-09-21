#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int stu;
	while(cin>>stu){
		int arr[stu];
		for(int i=0 ; i<stu ; i++){
			cin>>arr[i];
		}
		sort(arr,arr+stu);
		for(int i=0 ; i<stu ; i++){
			cout<<arr[i];
			if(i!=stu-1)
				cout<<" ";
		}
		int low=-1,high=-1;
		cout<<"\n";
		for(int i=0 ; i<stu ; i++){
			if(arr[i]<60)
				low=arr[i];
			else{
				high=arr[i];
				break;
			}
		}
		if(low==-1)
			cout<<"best case\n";
		else
			cout<<low<<"\n";
		if(high==-1)
			cout<<"worst case\n";
		else
			cout<<high<<"\n";
	}
 return 0 ;
}

