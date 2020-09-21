#include<iostream>
using namespace std;
int N,M;
int arr[1002][1002];
/*
	0:Empty
	1:Man
	2:Fire
	3:NULL
	4:Door
*/
bool DP(int arr[][1002],int point_x,int point_y)
{
	if((arr[point_x-1][point_y])==4)//left
	{
		cout<<"find door!"<<endl;
		return true;
	}
	else if((arr[point_x-1][point_y])==0)
	{
		(arr[point_x-1][point_y])=3;
		cout<<"arr["<<point_x-1<<"]["<<point_y<<"]==0"<<endl;
		if(DP(arr,point_x-1,point_y))
		{
			return true;
		}
	}
	else
	{
		cout<<"arr["<<point_x-1<<"]["<<point_y<<"]="<<arr[point_x-1][point_y]<<endl;
		cout<<"not left"<<endl;
	}
	
	if((arr[point_x+1][point_y])==4)//right
	{
		cout<<"find door!"<<endl;
		return true;
	}
	else if((arr[point_x+1]+point_y)==0)
	{
		(arr[point_x+1][point_y])=3;
		cout<<"arr["<<point_x+1<<"]["<<point_y<<"]==0"<<endl;
		if(DP(arr,point_x+1,point_y))
		{
			return true;
		}
	}
	else
	{
		cout<<"arr["<<point_x+1<<"]["<<point_y<<"]="<<arr[point_x+1][point_y]<<endl;
		cout<<"not right"<<endl;
	}
	
	if((arr[point_x][point_y+1])==4)//above
	{
		cout<<"find door"<<endl;
		return true;
	}
	else if((arr[point_x]+point_y+1)==0)
	{
		(arr[point_x][point_y+1])=3;
		cout<<"arr["<<point_x<<"]["<<point_y+1<<"]==0"<<endl;
		if(DP(arr,point_x,point_y+1))
		{
			return true;
		}
	}
	else
	{
		cout<<"arr["<<point_x<<"]["<<point_y+1<<"]="<<arr[point_x][point_y+1]<<endl;
		cout<<"not above"<<endl;
	}
	
	if((arr[point_x][point_y-1])==4)//below
	{
		cout<<"find door"<<endl;
		return true;
	}
	else if((arr[point_x]+point_y-1)==0)
	{
		(arr[point_x][point_y-1])=3;
		cout<<"arr["<<point_x<<"]["<<point_y-1<<"]==0"<<endl;
		if(DP(arr,point_x,point_y-1))
		{
			return true;
		}
	}
	else
	{
		cout<<"arr["<<point_x<<"]["<<point_y-1<<"]="<<arr[point_x][point_y-1]<<endl;
		cout<<"not below"<<endl;
	}
	return false;
}

int main()
{
	//int N,M;
	cin>>N>>M;
	//int arr[N+2][M+2];
	/*
		多開格子，讓地圖周圍都是3，避免跑出地圖 
	*/
	for(int i=0 ; i<N+2 ; i++)
	{
		for(int j=0 ; j<M+2 ; j++)
		{
			if(i==0||i==N+1||j==0||j==M+1)
			{
				arr[i][j]=3;
			}
			else
			{
				arr[i][j]=0;
			}
		}
	 }
	 
	 int X_me,Y_me;
	 cin>>X_me>>Y_me;
	 arr[X_me][Y_me]=1;
	 int X_door,Y_door;
	 cin>>X_door>>Y_door;
	 arr[X_door][Y_door]=4;
	 int F;
	 cin>>F;
	 
	 for(int i=0,X,Y ; i<F ; i++)
	 {
	 	cin>>X>>Y;
	 	arr[X][Y]=2;
	 }
	 for(int i=0 ; i<N+2 ; i++)
	 {
	 	for(int j=0 ; j<M+2 ; j++)
	 	{
	 		cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	 }
	 if(DP(arr,X_me,Y_me))//[Error] cannot convert 'int (*)[(M + 2)]' to 'int (*)[1002]' for argument '1' to 'bool DP(int (*)[1002], int, int)'
	 {
	 	cout<<"Cool!"<<endl;
	 }
	 else
	 {
	 	cout<<"Harakiri!"<<endl;
	 }
	 
 return 0 ;
}

