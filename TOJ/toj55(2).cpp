#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
signed int arr[1000000];
signed int brr[1000000];

int main() {
    signed int n , flag=0;
    scanf("%d",&n);
    //cin>>n;
    for(signed int i=0 ; i<n ; i++)
    {
    	scanf("%d",&arr[i]);
        //cin>>arr[i];
    }
    sort(arr,arr+n);
    signed int m;
    scanf("%d",&m);
    //cin>>m;
	signed int o;
	for(signed int j=0 ; j<m ; j++)
	{
		flag=0;
		scanf("%d",&o);
		//cin>>o;
		int n2=n;
		int flag=0;
		while(true)
		{
			if(o>arr[n/2])
			{
				n2=n/3*2;
			}
			else if(o<arr[n/2])
			{
				n2=n/3*1;
			}
			else if(o==arr[n/2])
			{
				flag=n/2;
				break;
			}
		}
		while(true)
		{
			if(o==arr[flag])
			{
				flag--;
			}
			else
			{
				flag++;
				break;
			}
		}
		int flag2=0;
		while(true)
		{
			if(arr[flag]==0)
			{
				flag2++;
			}
			else
			{
				break;
			}
		}
		/*for(signed int i=0 ; i<n ; i++)
        {
            if(o==arr[i])
            {
                flag++;
            }
            else if(o<arr[i])
            {
            	break;
			}
        }*/
        printf("%d\n",flag);
        //cout<<flag<<endl;
	}
    return 0;
}
