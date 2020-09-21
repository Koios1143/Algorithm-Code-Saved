#include<iostream>
using namespace std;
int main()
{	

	int n,m;
	cin>>n>>m;
	int xMe,yMe;
	cin>>xMe>>yMe;
	int xD,yD;
	cin>>xD>>yD;	
	int arr[m][n][1];
	//1->Door  2->Hin  3->Fire
	arr[yMe-1][xMe-1][0]=2;
	arr[yD-1][xD-1][0]=1;
	int f;
	cin>>f;
	for(int i=0,xI,yI ; i<f ; i++)
	{
		cin>>xI>>yI;
		arr[yI-1][xI-1][0]=3;
	}
	if(arr[yD-1+1][xD-1-1][0]==3||arr[yD-1+1][xD-1][0]==3||arr[yD-1+1][xD-1+1][0]==3||arr[yD-1][xD-1-1][0]==3||arr[yD-1][xD-1+1][0]==3||arr[yD-1-1][xD-1-1][0]==3||arr[yD-1-1][xD-1][0]==3||arr[yD-1-1][xD-1+1][0]==3)
	{
		
	}

 return 0 ;
}

