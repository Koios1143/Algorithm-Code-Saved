#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
/*double ans(double a,double b,double c,double d)
{
	double ans_=(-1.0)*b/3*a+cbrt((b*c/6*a*a)-(b*b*b/27*a*a*a)-(d/2*a)+sqrt(pow((b*c/6*a*a)-(b*b*b/27*a*a*a)-(d/2*a),2)+pow((c/3*a)-(b*b/9*a*a),3)))+cbrt((b*c/6*a*a)-(b*b*b/27*a*a*a)-(d/2*a)-sqrt(pow((b*c/6*a*a)-(b*b*b/27*a*a*a)-(d/2*a),2)+pow((c/3*a)-(b*b/9*a*a),3)));
	return ans_;
}*/
int main()
{
	int n;
	cin>>n;
	double a,b,c,d;
	for(int i=0 ; i<n ; i++)
	{
		cin>>a>>b>>c>>d;
		//cout<<fixed<<setprecision(3)<<ans(a,b,c,d)<<endl;
		cout<<fixed<<setprecision(3)<<(-1.0)*b/(3.0*a)*(1.0)+cbrt((b*c/(6.0*a*a))-(b*b*b/(27.0*a*a*a))-(d/(2.0*a))+sqrt(pow((b*c/(6.0*a*a))-(b*b*b/(27.0*a*a*a))-(d/(2.0*a)),2.0)+pow((c/(3.0*a))-(b*b/(9.0*a*a)),3.0)))+cbrt((b*c/(6.0*a*a))-(b*b*b/(27.0*a*a*a))-(d/(2.0*a))-sqrt(pow((b*c/(6.0*a*a))-(b*b*b/(27.0*a*a*a))-(d/(2.0*a)),2.0)+pow((c/(3.0*a))-(b*b/(9.0*a*a)),3.0)))<<endl;
	}


 return 0 ;
}

