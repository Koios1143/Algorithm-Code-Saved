#include<iostream>
#include<vector>
#include"memory.h"
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>v;
    bool YN[20001];
    for(int i=0,size=0,num ; i<n ; i++)
    {
		memset(YN,0,sizeof(YN));
        cin>>num;
        size=v.size();
        if(i==0)
        {
            v.push_back(num);
            v.push_back((-1)*num);
        }
        for(int j=0 ; j<size ; j++)
        {
            if(!YN[num+v[j]+10000])
            {
                YN[num+v[j]+10000]=true;
				v.push_back(num+v[j]);
            }
            
            if(!YN[(-1)*num+v[j]+10000])
            {
                YN[(-1)*num+v[j]+10000]=true;
				v.push_back((-1)*num+v[j]);
            }
            
        }
		v.erase(v.begin(),v.begin()+size);
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
