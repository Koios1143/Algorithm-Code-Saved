#include<iostream>
using namespace std;
int main()
{
	while(true)
	{
		int n;
	cin>>n; /*��J��n�Ӧr�� */ 
	string password;
	getline(cin,password);
	getline(cin,password); /*��J�K��*/
	char arr[300][300];
	for(int i=0 ; i<300 ; i++)/*���N�}�C����J�@�ӪŮ�A�קK�K�嵲���O�Ů�A�����|������J�Ů�*/
	{
		for(int j=0 ; j<300 ; j++)
		{
			arr[i][j]=' ';
		}
	}
	int space=password.size();
	if(space/n!=0)/*�Y�K����׻Pn�����������Y(�̫ᦳ�Ů�)�N�Nspace�אּ��n�̪�B�j��space����*/ 
	{
		space=n*(space/n+1);
	}
	for(int i=0 , k=0; i<space/n && k<=space ; i++)/*�N�K���J�}�C*/ 
	{
		for(int j=0 ; j<n ; j++)
		{
			arr[j][i]=password[k];
			cout<<arr[j][i]<<endl;
			k++;
		}
	}
	for(int i=0 ; i<n ; i++)/*�N���׿�X*/ 
	{
		for(int j=0 ; j<space/n ; j++)
		{
			cout<<arr[i][j];
		}
	}
	cout<<endl;
	}
	
 return 0 ;
 
}



