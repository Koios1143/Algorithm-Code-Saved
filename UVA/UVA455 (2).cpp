#include<iostream>
using namespace std;
int main()
{
	int times;
	cin>>times;
	bool first=true;
	while(times--)
	{
		if(first)
		{
			first=false;
		}
		else
		{
			cout<<"\n";
		}
		string s;
		cin>>s;
		int size=s.size();
		bool over=false;
		for(int i=1 ; i<size ; i++)
		{
			if(over)
				break;
			if(s[0]==s[i] && size%i==0)
			{
				int tmp=i;//cycle
				bool YN=true;
				for(int j=0 ; j<tmp ; j++)
				{
					if(!YN)
						break;
					for(int k=tmp+j ; k<size ; k+=tmp)
					{
						//cout<<"s["<<j<<"]="<<s[j]<<"  "<<"s["<<k<<"]="<<s[k]<<"\n";
						if(s[j]!=s[k])
						{
							YN=false;
						}
					}
				}
				if(YN)
				{
					//ans=tmp;
					cout<<tmp;//<<"\n\n";
					over=true;
				}
			}
		}
		if(!over)
			cout<<size;//<<"\n\n";
	}
	


 return 0 ;
}

