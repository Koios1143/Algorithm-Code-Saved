#include <iostream>
using namespace std;
bool p[50001];
int a,x,m;
inline void yn()
{
    for(x=0;x<50001;x++)
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
    for(x=0;x<50001;x++)
    {
        p[x]=true; 
    } 
    p[0]=false;
    p[1]=false;
    for(x=0;x<=250;x++)
    {
        if(p[x])
        {
            m=2;
            do
            {
                p[x*m]=false;
                m++; 
            }while(x*m<50001);
            p[x]=true; 
        }                       
    }
    while(cin>>a)
    {
        yn();
        cout<<endl; 
    } 
    return 0;
}
