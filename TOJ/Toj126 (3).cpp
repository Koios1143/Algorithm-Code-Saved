#include<iostream>
#include<vector>
#include"memory.h"
#include<cmath>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>v;
    int arr[n];
    bool YN[20001];
    bool YN2[20001];
    memset(YN,0,sizeof(YN));
    memset(YN2,0,sizeof(YN2));
    for(int i=0,size=0 ; i<n ; i++)
    {
        cin>>arr[i];
        size=v.size();
        v.push_back(arr[i]);
        v.push_back((-1)*arr[i]);
        for(int j=0 ; j<size ; j++)
        {
        	if(i+1==n)
        	{
				YN2[arr[i]+v[j]+10000]=true;
				YN2[(-1)*arr[i]+v[j]+10000]=true;
			}
			else
			{
				if(!YN[arr[i]+v[j]+10000])
	            {
	                YN[arr[i]+v[j]+10000]=true;
	                v.push_back(arr[i]+v[j]);
	            }
	            if(!YN[(-1)*arr[i]+v[j]+10000])
	            {
	                YN[(-1)*arr[i]+v[j]+10000]=true;
	                v.push_back((-1)*arr[i]+v[j]);
	            }
			}
        }
    }
    /*for(int i=0 ; i<20001 ; i++)
    {
    	if(YN2[i])
    	{
    		cout<<i-10000<<"=true"<<endl;
		}
	}*/
    for(int i=0,num ; i<q ; i++)
    {
        cin>>num;
        if(YN2[num+10000])
        {
            cout<<num<<endl;
        }
        else
        {
            for(int i=num+10000 ; i<=20000 ; i++)
            {
                if(YN2[i])
                {
                    cout<<i-10000<<endl;
                    break;
                }
            }
        }
    }
 return 0 ;
}
