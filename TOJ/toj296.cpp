#include <iostream>
using namespace std;
bool p[10000001];
int pr[10000001];
int a,x,m;
inline void yn()
{
    for(x=0;x<10000001;x++)
    {
        if(p[x]&&(a%x==0&&a!=x))
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<pr[a]<<endl;
}
int main()
{
	long long flag=1;
    for(x=0;x<10000001;x++)
    {
        p[x]=true; 
    } 
    p[0]=false;
    p[1]=false;
    for(x=0;x<=5000;x++)
    {
        if(p[x])
        {
            m=2;
            do
            {
                p[x*m]=false;
                m++; 
            }while(x*m<10000001);
            p[x]=true;
            pr[x]=flag;
            flag++;
        }                       
    }
    while(cin>>a)
    {
        yn();
    } 
    return 0;
}
