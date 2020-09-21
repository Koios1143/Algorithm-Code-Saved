#include<iostream>
#include<vector>
using namespace std;
int p[10000005];
bool p2[10000005];
void set()
{
    p[0]=1;
    p[1]=1;
    p2[0]=p2[1]=0;
    for(long long i=2 ; i<10000005 ; i++)
    {
    	p2[i]=0;
        if(!p[i])
        {
            for(long long j=i*i ; j<10000005 ; j+=i)
            {
                if(!p[j])
                {
                    p[j]=i;
                }
            }
            p[i]=i;
        }
    }
}
int main()
{
    set();
    int times;
    cin>>times;
    for(int i=0,num ; i<times ; i++)
    {
        cin>>num;
        if(num==p[num])//is prime
        {
            cout<<1<<" "<<num<<endl;
        }
        else
        {
            int space=num;
            vector<int> v;
            while(true)
            {
                if(space==p[space]&&!p2[space])
                {
					v.push_back(p[space]);
					p2[p[space]]=1;
	                break;
                }
                else
                {
                	if(!p2[space])
                	{
                		space=space/p[space];
					}
					else
					{
						v.push_back(p[space]);
						p2[p[space]]=1;
	                    space=space/p[space];
					}
                }
            }
            int size=v.size();
            if(v[0]==v[size-1])
            {
                cout<<1<<" "<<v[0]<<endl;
            }
            else
            {
                cout<<v[size-1-1]<<" "<<v[size-1]<<endl;
            }
        }
    }
 return 0 ;
}
