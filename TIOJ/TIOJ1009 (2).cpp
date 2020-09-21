#include<iostream>
#include<string>
using namespace std;
int main()
{
	string start,end;
	int H1,H2,M1,M2,S1,S2;
	cin>>start;
	cin>>end;
	if(start[0]==0) H1=start[1];
	else H1=start
	if(start[3]==0) M1=start[4];
	if(start[6]==0) S1=start[7];
	int Hn,Mn,Sn;
	string H,M,S;
	if(H1>H2)/*過了一天 *///H2 end  H1 start
	{
		H2+=24;
		if(M2<M1)
		{
			H2-=1;
			M2+=60;
		}
		if(S2<S1)
		{
			M2-=1;
			M2+=60;
		}
		Hn=H2-H1;
		Mn=M2-M1;
		Sn=S2-S1;
		if(Hn<10) cout<<"0"<<Hn<<":";
		else cout<<Hn<<":";
		if(Mn<10) cout<<"0"<<Mn<<":";
		else cout<<Mn<<":";
		if(Sn<10) cout<<"0"<<Sn<<endl;
		else cout<<Sn<<endl;
	}
	else/*還在當天*/
	{
		if(M2<M1)
		{
			H2-=1;
			M2+=60;
		}
		if(S2<S1)
		{
			M2-=1;
			M2+=60;
		}
		Hn=H2-H1;
		Mn=M2-M1;
		Sn=S2-S1;
		if(Hn<10) cout<<"0"<<Hn<<":";
		else cout<<Hn<<":";
		if(Mn<10) cout<<"0"<<Mn<<":";
		else cout<<Mn<<":";
		if(Sn<10) cout<<"0"<<Sn<<":";
		else cout<<Sn<<":";
	}


 return 0 ;
 
}



