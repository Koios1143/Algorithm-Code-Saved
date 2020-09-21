//By Koios1143
#include<bits/stdc++.h>
using namespace std;
const int Max = 26;

struct Node{
	Node *child[Max];
	int fail;
	Node(){
		for(int i=0 ; i<Max ; i++){
			child[i]=NULL;
		}
		fail=-1;
	}
};

struct Trie{
	Node *root;
	
	void init(){
		for(int i=0 ; i<Max ; i++){
			root->child[i] = NULL;
		}
	}
	
	void build(const string &s){
		Node *cur=root;
		for(char c : s){
			if(cur->child[(int)c] == NULL){
				cur->child[(int)c] = new Node();
			}
			cur=cur->child[(int)c];
		}
	}
	
	void build_fail(){
		Node *cur = root;
		queue<int> q;
		for(int i=0 ; i<Max ; i++){
			if(cur->child[i]!=NULL){
				q.push(cur->child[i]);
			}
		}
		while(!q.empty()){
			
		}
	}
};


int main(){


	return 0;
}


