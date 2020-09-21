#include<iostream>
using namespace std;
int arr[200000];

int main(){


	long long n; 
	cin>>n;//輸入檔案櫃的大小
	for(int i=0,space=0 ; i<n ; i++)
	{
		cin>>space;
		arr[i]=space;//輸入檔案的位置 
	}
	long long t;//輸入指令的數量 
	cin>>t;
	long long a,b;//檔案櫃要交換的位置 
	for(long long i=0 ,space1=0 , space2=0 ; i<t ; i++)
	{
		cin>>a>>b;
		space1=arr[a-1];//用space1暫存用來後面比較大小 
		space2=arr[b-1];//用space2暫存用來後面比較大小
			if(space1<space2)//比較大小 
			{
				swap(space1,space2);//確立space1必大於space2 
			}
			if(space1-space2>=8)//若檔案位置大於8 
			{
				cout<<"I QUIT!"<<endl;
					for(int j=0 ; j<n ; j++)//輸出檔案櫃的現狀 
					{
						cout<<arr[j]<<" ";
					}
				return 0;
			}
			else
			{
				
				swap(arr[a-1],arr[b-1]);//交換檔案的位置 
			
			}
		
	}

		cout<<"SORTED!"<<endl;
			for(int i=0 ; i<n ; i++)//輸出檔案的現狀 
			{
				cout<<arr[i]<<" ";
			}
	
	


 return 0;
 
}

