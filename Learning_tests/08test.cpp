#include<iostream>
using namespace std;
int main()
{
	char arr[256];
	cin>>arr[0];
	cin>>arr[1];
	cin>>arr[2];
	cin>>arr[3];
	cin>>arr[4];
	cin>>arr[5];
	cin>>arr[6];
	cin>>arr[7];
	cin>>arr[8];
	cin>>arr[9];
	cin>>arr[10];
	cin>>arr[11];
	cin>>arr[12];
	cin>>arr[13];
	cin>>arr[14];
	cin>>arr[15];
	cin>>arr[16];
	cin>>arr[17];
	cin>>arr[18];
	cin>>arr[19];
	char brr[256][256];
	
	brr[0][0]=arr[0];
	brr[1][0]=arr[1];
	brr[2][0]=arr[2];
	brr[3][0]=arr[3];
	brr[0][1]=arr[4];
	brr[1][1]=arr[5];
	brr[2][1]=arr[6];
	brr[3][1]=arr[7];
	brr[0][2]=arr[8];
	brr[1][2]=arr[9];
	brr[2][2]=arr[10];
	brr[3][2]=arr[11];
	brr[0][3]=arr[12];
	brr[1][3]=arr[13];
	brr[2][3]=arr[14];
	brr[3][3]=arr[15];
	brr[0][4]=arr[16];
	brr[1][4]=arr[17];
	brr[2][4]=arr[18];
	brr[3][4]=arr[19];
	
	for(int i=0 ; i<20 ; i++)
	{
		for(int j=0 ; j<4 ; j++)
		{
			cout<<brr[j][i];
		}
	}
	
	


 return 0 ;
 
}



