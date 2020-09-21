#include<iostream>
#include<string>
using namespace std;
string ss;
string a,b;
long long n,m;
void s(int day)
{
    if(day==0)
        return;
    ss=b+a;
    /*if(ss.size()>m)
    {
    	ss.resize(m);
	}*/
	if(ss.size()>=m)
	{
		return;
	}
    a=b;
    b=ss;
    ss.clear();
    return s(day-1);
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    cin>>a>>b;
    cin>>n>>m;
    s(n-2);
    if(ss.size()<m)
    {
        cout<<"X\n";
    }
    else
    {
        cout<<ss[m-1]<<"\n";
    }

 return 0 ;
}

