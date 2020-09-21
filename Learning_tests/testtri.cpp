#include<iostream> 
using namespace std; 
int main(){ 
int max ;
cin>>max;//5
for(int i = 1;i<=max;i+=2)
{ 

	for(int k=0;k<max-i;k+=2)
	{ 
	cout<<" "; 
	} 

	for(int j=0;j<i;j++)
	{ 
	cout<<"*"; 
	} 

cout<<endl; 
} 
system("pause"); 
} 

