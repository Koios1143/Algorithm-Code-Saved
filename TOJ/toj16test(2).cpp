#include<iostream>
using namespace std;
//資料皆照大小排列 
//只有2筆資料時 ok
//只有3筆資料時 
int main()
{
	int T,S,Q,W;
	int arr[15010];//存心情指數 
	int brr[30005];
	cin>>T;
	while(T)
	{
		cin>>S;
		for(int i=0,n ; i<S ; i++)
		{
			cin>>arr[n];
		}
		int times=0;
		for(int i=1 ; i<S-1 ; i++)
		{
			times++;
		}
		for(int i=0 ; i<S-1 ; i++)
		{
			for(int j=)
		}
		//sort(arr,arr+s);
		cin>>Q;
		for(int i=0 ; i<Q ; i++)
		{
			cin>>W;
			if(W==arr[0]+arr[1])
			{
				cout<<"Good!"<<endl;
			}
			else
			{
				cout<<"So Bad!"<<endl;
			}
		}
		T--;
	}
 return 0 ;
 
}



