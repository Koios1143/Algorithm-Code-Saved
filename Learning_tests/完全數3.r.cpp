#include <iostream>
using namespace std;

int main()
{
 long long n,buf,i;
    cout<<"請輸入N:";
 cin>>n;
    cout<<"小於N的完美數有:";
 for(i=1;i<=n;i++){
  buf=0;
  for(int j=1;j<i;j++){
   if(i%j==0)buf=buf+j;
  }
  if(buf==i)cout<<i<<" ";
 }
 cout<<endl;
 system("pause");
 return 0;
}
