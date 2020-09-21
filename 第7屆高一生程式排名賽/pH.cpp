#include "grader.h"
using namespace std;
int main()
{
	int n,m,p,q,s;
	Init(&n,&m);
	while(m--)
	{
		for(p=1,q=n;p<q;)//start in q=n  binary search
		{
			s=Ask(p,(p+q)>>1);
			if(s==1)//clean left
				q=(p+q)>>1;
			else//clean right
				p=(p+q)>>1|1;
		}
		Clean(p);
	}
	Submit();
 return 0 ;
}

