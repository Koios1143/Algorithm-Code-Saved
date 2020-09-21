#include<iostream>
using namespace std;
/*class items
{
	public:
		int price;
		int stacks;
		int total;
		void setdata(int p,int s,int t)
		{
			price=p;
			stacks=s;
			total=t;
		}
};*/
int main() {
	int N,M;
	cin>>N>>M;
	int V[M];
	int S[M];
	int A[M];
	for(int i=0 ; i<M ; i++)
	{
		cin>>V[i];
		cin>>S[i];
		cin>>A[i];
	}
	int total=0;
	for(int i=0 ; i<M ; i++)
	{
		total+=V[i]*A[i];
	}
	cout<<total<<endl;
	/*while(N)
	{
		int f=0,p;
		for(int i=0 ; i<M ; i++)
		{
			if(V[i]>f)
			{
				f=V[i];
				p=i;
			}
		}
		if(S[p]<A[p])
		{
			total+=V[p]*S[p];
		}
		else
		{
			total+=V[p]*A[p];
		}
		V[p]=0;
		N--;
	}
	cout<<total<<endl;*/

	return 0;
}

