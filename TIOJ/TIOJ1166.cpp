#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    if(a<b) swap(a,b);
    if(b==0) return 0;
    if(a%b==0) return b;
    else return GCD(a%b,b);
}
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		{
			break;
		}
		else
		{
			cout<<GCD(a,b)<<endl;
		}
	}


 return 0 ;
}

