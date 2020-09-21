#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x1,y1,r1,x2,y2,r2;
	double distance;
	while(cin>>x1>>y1>>r1>>x2>>y2>>r2)
	{
		distance=sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
		if(distance<=r1+r2)
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

