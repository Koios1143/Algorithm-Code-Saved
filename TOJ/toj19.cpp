#include<iostream>
using namespace std;
int main()
{
	double x1,y1,r1,x2,y2,r2;
	bool YN=0;
	while(cin>>x1>>y1>>r1>>x2>>y2>>r2)
	{
		YN=0;
		//left down right up
		/*if(((x1+r1>=x2-r2&&x1+r1<=x2+r2)||(x1-r1<=x2+r2&&x1-r1>=x2-r2))&&((y1+r1>=y2-r2&&y1+r1<=y2+r2)||(y1-r1<=y2+r2&&y1-r1>=y2-r2)))
		{
			cout<<"Quick in"<<endl;
		}
		else
		{
			cout<<"Nearly"<<endl;
		}*/
		//left down
		if( (x1+r1>x2-r2&&x1+r1<x2+r2) && (y1+r1>y2-r2&&y1+r1<y2+r2))
		{
			YN=1;
		}
		//left up
		else if( (x1+r1>x2-r2&&x1+r1<x2+r2) && (y1-r1<y2+r2&&y1-r1>y2-r2))
		{
			YN=1;
		}
		//right down
		else if( (x1-r1<x2+r2&&x1-r1>x2-r2) && (y1+r1>y2-r2&&y1+r1<y2+r2))
		{
			YN=1;
		}
		//right up
		else if( (x1-r1<x2+r2&&x1-r1>x2-r2) && (y1-r1<y2+r2&&y1-r1>y2-r2))
		{
			YN=1;
		}
		else if(x2<x1+r1&&x2>x1-r1&&y2<y1+r1&&y2>y1-r1)
		{
			YN=1;
		}
		else if(x1<x2+r2&&x1>x2-r2&&y1<y2+r2&&y1>y2-r2)
		{
			YN=1;
		}
		else
		{
			YN=0;
		}
		if(YN==1)
		{
			cout<<"Quick in"<<endl;
		}
		else
		{
			cout<<"Nearly"<<endl;
		}
	}
	
 return 0 ;
}
