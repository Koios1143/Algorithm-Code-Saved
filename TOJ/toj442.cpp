#include <iostream>
using namespace std;
bool p[1000001];
int a,x,m;
inline bool yn()
{
    for(x=0;x<1000001;x++)
    {
        if(p[x]&&(a%x==0&&a!=x))
        {
            //cout<<"非質數";
            return 0;
        }
    }
    //cout<<"質數";
    return 1;
}
int main()
{
    for(x=0;x<1000001;x++)
    {
        p[x]=true; 
    } 
    p[0]=false;
    p[1]=false;
    for(x=0;x<=2500;x++)
    {
        if(p[x])
        {
            m=2;
            do
            {
            	p[x*m]=false;
                m++; 
            }while(x*m<1000001);
            p[x]=true; 
        }                       
    }
    while(cin>>a)
    {
    	if(yn()==1)
    	{
    		cout<<1<<" "<<a<<endl;
		}
		else
		{
			cout<<"."<<endl;
		}
    } 
    return 0;
}
