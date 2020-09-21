#include<iostream>
using namespace std;
int f(int x1,int x2,int y1,int y2)
{
	if(x2<x1) swap(x1,x2);
	if(y2<y1) swap(y1,y2);
	int y,x;
	double a;
	y=y2-y1;
	x=x2-x1;
	a=y/x;
	return a;
}
int main()
{
	int x1,x2,y1,y2;
	while(cin>>x1>>y1>>x2>>y2)
	{
		int ans=0;
		if(y2<y1) swap(y2,y1);
		if(x2<x1) swap(x2,x1);
		ans+=y2-y1+1;
		ans+=x2-x1;
		int a=f(x1,y1,x2,y2);
		/*while(x2>x1 && y2>y1)
		{
			x2-=1;
			y2-=1;
			if(y2=a*x2) ans++;
			else break;
		}*/
		/*if( (x2-x1)==(y2-y1) )
		{
			ans+=x2-x1-1;
		}*/
		cout<<ans<<endl;
	}
	


 return 0 ;
 
}



