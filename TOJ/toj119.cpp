#include<iostream>
using namespace std;
int arr[200000];

int main(){


	long long n; 
	cin>>n;//��J�ɮ��d���j�p
	for(int i=0,space=0 ; i<n ; i++)
	{
		cin>>space;
		arr[i]=space;//��J�ɮת���m 
	}
	long long t;//��J���O���ƶq 
	cin>>t;
	long long a,b;//�ɮ��d�n�洫����m 
	for(long long i=0 ,space1=0 , space2=0 ; i<t ; i++)
	{
		cin>>a>>b;
		space1=arr[a-1];//��space1�Ȧs�Ψӫ᭱����j�p 
		space2=arr[b-1];//��space2�Ȧs�Ψӫ᭱����j�p
			if(space1<space2)//����j�p 
			{
				swap(space1,space2);//�T��space1���j��space2 
			}
			if(space1-space2>=8)//�Y�ɮצ�m�j��8 
			{
				cout<<"I QUIT!"<<endl;
					for(int j=0 ; j<n ; j++)//��X�ɮ��d���{�� 
					{
						cout<<arr[j]<<" ";
					}
				return 0;
			}
			else
			{
				
				swap(arr[a-1],arr[b-1]);//�洫�ɮת���m 
			
			}
		
	}

		cout<<"SORTED!"<<endl;
			for(int i=0 ; i<n ; i++)//��X�ɮת��{�� 
			{
				cout<<arr[i]<<" ";
			}
	
	


 return 0;
 
}

