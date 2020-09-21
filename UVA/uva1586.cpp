#include<iostream>
#include<string.h>
#include<assert.h>
using namespace std;
int main()
{
	int T,cnt,sz;
	double W[256],ans;
	char buf[256],s;
	W['C']=12.01,W['H']=1.008,W['O']=16.00,W['N']=14.01;
	scanf("%d\n",&T);
	while(T--)
	{
		scanf("%s",buf);
		ans=0;
		s=0;
		cnt=-1;
		sz=strlen(buf);
		for(int i=0 ; i<sz ; ++i)
		{
			char c=buf[i];
			if(isupper(c))
			{
				if(i)
				{
					if(cnt==-1)
					{
						cnt=1;
					}
					ans+=W[s]*cnt;
				}
				s=c;
				cnt=-1;
			}
			else
			{
				assert(isdigit(c));
				if(cnt==-1)
				{
					cnt=0;
				}
				cnt=cnt*10+c-'0';
			}
		}
		if(cnt==-1)
		{
			cnt=1;
		}
		ans+=W[s]*cnt;
		printf("%.3lf\n",ans);
	}
	
 return 0 ;
}

