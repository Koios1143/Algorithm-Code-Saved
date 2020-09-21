#include<iostream>
using namespace std;
int main()
{
	while(true)
	{
		int n;
	cin>>n; /*輸入有n個字符 */ 
	string password;
	getline(cin,password);
	getline(cin,password); /*輸入密文*/
	char arr[300][300];
	for(int i=0 ; i<300 ; i++)/*先將陣列都輸入一個空格，避免密文結尾是空格，但不會直接輸入空格*/
	{
		for(int j=0 ; j<300 ; j++)
		{
			arr[i][j]=' ';
		}
	}
	int space=password.size();
	if(space/n!=0)/*若密文長度與n不為倍數關係(最後有空格)就將space改為離n最近且大於space的值*/ 
	{
		space=n*(space/n+1);
	}
	for(int i=0 , k=0; i<space/n && k<=space ; i++)/*將密文輸入陣列*/ 
	{
		for(int j=0 ; j<n ; j++)
		{
			arr[j][i]=password[k];
			cout<<arr[j][i]<<endl;
			k++;
		}
	}
	for(int i=0 ; i<n ; i++)/*將答案輸出*/ 
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



