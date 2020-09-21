#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	getline(cin,name);
	string name2;
	name2+=toupper(name[0]);
	for(int i=1 ; i<name.size() ; i++)
	{
		name2+=name[i];
	}
	cout<<" Nice to see you, "<<name2<<"!"<<endl;

 return 0 ;
}

