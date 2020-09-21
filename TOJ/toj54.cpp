#include<iostream>
#include<vector>
using namespace std;
struct words{
	int code;
	char first;
	char second;
};
int main()
{
	int n;
	while(cin>>n)
	{
		words ww[n];
		string s;
		vector<int> fir[26];
		vector<int> sec[26];
		for(int i=0 ; i<n ; i++)
		{
			cin>>s;
			ww[i].code=i;
			ww[i].first=s[0];
			ww[i].second=s[s.size()-1];
			fir[ww[i].first-'a'].push_back(i);
			sec[ww[i].second-'a'].push_back(i);
		}
		
	}


 return 0 ;
}

