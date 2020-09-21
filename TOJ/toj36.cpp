#include<iostream>
#include<stdio.h>
using namespace std;
unsigned int answer (unsigned int a,unsigned int b,unsigned int c)
{
    	if(a%c==a)
	{
        unsigned int a1=1;
    	for(unsigned int i=0 ;i<b ;i++)
        {
            a1=(a1*a)%c;
		}
        return a1;
	}
    else
	{
        a%=c;
   		return answer(a,b,c);
	}
}
int main()
{
    unsigned int a,b,c;
    cin>>a>>b>>c;
    cout<< answer(a,b,c)<<endl;
}
