#include<iostream>
#include<cmath>
using namespace std;
int digits(int n)
{
    int l=0;
    while(n!=0)
    {
        n/=10;
        l++;
    }
    return l;
}
int main()
{
    int b,N;
    cin>>b>>N;
    //int N2=N;
    int num=0,num2=0;
    for(int i=0,space=digits(N) ; i<space ; i++)
    {
        num2+=N%10*(pow(b,i));
        num+=pow((N%10),space);    
        N/=10;
    }
    num2==num ? cout<<"YES\n" : cout<<"NO\n";

 return 0 ;
}
