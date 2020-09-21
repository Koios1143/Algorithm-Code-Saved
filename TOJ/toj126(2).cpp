#include<iostream>
#include<vector>
#include"memory.h"
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>v;
    int arr[n];
    bool YN[20001];
    //bool YN2[20001];
    memset(YN,0,sizeof(YN));
	//memset(YN2,0,sizeof(YN2));
    for(int i=0,size=0,size2=0 ; i<n ; i++)
    {
    	cin>>arr[i];
		size=v.size();
        if(i==0)
        {
            v.push_back(arr[i]);
            v.push_back((-1)*arr[i]);
        }
        if(i+1==n)
        {
        	memset(YN,0,sizeof(YN));
		}
        for(int j=size2 ; j<size ; j++)
        {
            if(i+1==n)
            {
            	
            	if(!YN[arr[i]+v[j]+10000])
            	{
            		YN[arr[i]+v[j]+10000]=true;
				}
				v.push_back(arr[i]+v[j]);
                if(!YN[(-1)*arr[i]+v[j]+10000])
                {
                	YN[(-1)*arr[i]+v[j]+10000]=true;
				}
				v.push_back((-1)*arr[i]+v[j]);
            }
            else
            {
                if(!YN[arr[i]+v[j]+10000])
                {
                    YN[arr[i]+v[j]+10000]=true;
                }
				v.push_back(arr[i]+v[j]);
                if(!YN[(-1)*arr[i]+v[j]+10000])
                {
                    YN[(-1)*arr[i]+v[j]+10000]=true;
                }
				v.push_back((-1)*arr[i]+v[j]);
            }
        }
        size2=size;
    }
    for(int i=0,num ; i<q ; i++)
    {
        cin>>num;
        if(YN[num+10000])
        {
            cout<<num<<endl;
        }
        else
        {
            for(int j=num+10000 ; j<=20000 ; j++)
            {
                if(YN[j])
                {
                    cout<<j-10000<<endl;
                    break;
                }
            }
        }
    }
 return 0 ;
}
