#include<iostream>
#include<string>
using namespace std;
int main()
{
    string D;
    cout<<"�п�J�@�q��r(�^��):";
    cin>>D;
    for(int t=0 ; t<26 ; t++)
    {
	    string ans;
	    int space=0;
	    char a;
	    unsigned int size=D.size();
	    for(unsigned int i=0 ; i<size ; i++)
	    {
	        space=D[i];
			
	        if(space>=65&&space<=90)
	        {
				space+=t;
		        if(space>90)
		        {
		            space-=26;
		        }
		        a=space;
		        ans+=a;
			}
	        else
	        {
	        	space+=t;
	        	if(space>122)
	        	{
	        		space-=26;
				}
				a=space;
				ans+=a;
			}
	    }
	    cout<<"�첾�q:"<<t<<"\t"<<ans<<endl;
	}
 return 0 ;
}
