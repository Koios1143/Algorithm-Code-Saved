#include<iostream>
#include<vector>
using namespace std;
int p[10000005];
vector<int> v;
void set()
{
    for(long long i=2 ; i<=10000005 ; i++)
    {
        if(!p[i])
        {
            for(long long j=i*i ; j<=10000005 ; j+=i)
            {
                if(!p[j]) 
                {
                    p[j]=i;    
                }
            }
        }
    }
    for(long long i=1 ; i<10000005 ; i++)
    {
        if(!p[i]) p[i]=i; 
    }
}
int main() {
    set();
    int n;
    cin>>n;
    for(int i=0,t=0,num ; i<n ; i++)
    {
        vector<int> ve;
        cin>>num;
        //cout<<p[num]<<" "<<num/p[num]<<endl;
        //v.push_back(p[num]);
        while(true)
        {
            if(p[num]==num)
            {
                ve.push_back(num);
                break;
            }
            else
            {
                ve.push_back(p[num]);
                //while(num!=p[num])
                num=num/p[num];
            }
        }
        int size=ve.size();
        //cout<<size<<endl;
        if(ve[0]==ve[size-1]/*size<=2&&ve[0]==ve[size-1]||ve[0]==ve[size-1]*/)
        {
            cout<<1<<" "<<ve[0]<<endl;
        }
        else
        {
            cout<<ve[size-2]<<" "<<ve[size-1]<<endl;
        }
    }

    return 0;
}

