#include<iostream>
#include<iomanip> 
using namespace std;
int c,n,arr[1005];
int main(){
	cin>>c; 
	while(c--){
		cin>>n;
		double avg=0;
		for(int i=0 ; i<n ; i++){
			cin>>arr[i]; 
			avg+=arr[i];// ���N���Z�[�`
		}
		avg/=n;// �A�Ӻ⥭�� 
		int cnt=0;
		for(int i=0 ; i<n ; i++){
			if(arr[i]>avg)
				cnt++;// �O���j�󥭧����ƶq 
		}
		cout<<fixed<<setprecision(3)<<((double)cnt/(double)n)*100.0<<"%\n";
	}
	return 0;
}

