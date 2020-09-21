# include <iostream>
# include <cstdlib>
using namespace std;
int main()
{
long long  a,b,k;
while(cin>>a>>b)
{
cout<<a;
for(int i=a ;i<b;i++){
cout<<"*"<<i+1;
	}
	k=1;
	for(int i=a ; i<=b ; i++)
	{
		k*=i;
	}
cout<<"="<<k<<endl;
}


  return(0);
}
