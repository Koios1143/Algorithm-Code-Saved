#include <iostream>
using namespace std;

int main()
{
 long long n,buf,i;
    cout<<"�п�JN:";
 cin>>n;
    cout<<"�p��N�������Ʀ�:";
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
