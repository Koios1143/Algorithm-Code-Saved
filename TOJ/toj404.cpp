#include<iostream>
#include<vector>
using namespace std;
const int Max=10000;
void Merge(vector<int>&Array,int front,int mid,int end)
{
	vector<int>LeftSub(Array.begin()+front,Array.begin()+mid+1);
	vector<int>RightSub(Array.begin()+mid+1,Array.begin()+end+1);
	LeftSub.insert(LeftSub.end(),Max);
	RightSub.insert(RightSub.end(),Max);
	int idxLeft=0,idxRight=0;
	for(int i=front ; i<=end ; i++)
	{
		if(LeftSub[idxLeft]<=RightSub[idxRight])
		{
			Array[i]=LeftSub[idxLeft];
			idxLeft++;
		}
		else
		{
			Array[i]=RightSub[idxRight];
			idxRight++;
		}
	}
}
void MergeSort(vector<int>&array,int front,int end)
{
	if(front<end)
	{
		int mid=(front+end)/2;
		MergeSort(array,front,mid);
		MergeSort(array,mid+1,end);
		Merge(array,front,mid,end);
	}
}
int main()
{
	int n;
	while(cin>>n)
	{
		vector<int>v;
		for(int i=0,space ; i<n ; i++)
		{
			cin>>space;
			v.push_back(space);
		}
		MergeSort(v,0,n-1);
		bool flag=1;
		int i=0;
		do
		{
			if(v[i]+1==v[i+1])
			{
				i++;
				//cout<<"v["<<i<<"]+1==v["<<i+1<<"]"<<endl;
			}
			else
			{
				flag=0;
				break;
			}
		}while(i<n-1);
		if(flag==0)
		{
			cout<<v[0]<<" "<<v[n-1]<<" no"<<endl;
		}
		else
		{
			cout<<v[0]<<" "<<v[n-1]<<" yes"<<endl;
		}
	}

 return 0 ;
}

