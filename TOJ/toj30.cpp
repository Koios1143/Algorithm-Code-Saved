#include <iostream>
using namespace std;
bool p[1000005]={1};
int a,x,m;
inline void yn()
{
    for(x=0;x<1000005;x++)
    {
        if(p[x]&&(a%x==0&&a!=x))
        {
            cout<<"非質數";
            return;
        }
    }
    cout<<"質數";
}
int main()
{
    /*for(x=0;x<50001;x++)
    {
        p[x]=true; 
    } */
    int point=1;
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
            }while(x*m<1000005);
            p[x]=true; 
        }                       
    }
    while(cin>>a)
    {
        yn();
    } 
    return 0;
}
