#include<iostream>
using namespace std;
int main(){
	char keyboard[4][13]={{'`','1','2','3','4','5','6','7','8','9','0','-','='},{'Q','W','E','R','T','Y','U','I','O','P','[',']','\\'},{'A','S','D','F','G','H','J','K','L',';','\''},{'Z','X','C','V','B','N','M',',','.','/',' ',' ',' '}};
	string words;
	while(getline(cin,words)){
		int size=words.size();
		for(int k=0 ; k<size ; k++){
			bool done=false;
			if(words[k]==' '||words[k]=='Q'||words[k]=='A'||words[k]=='Z'||words[k]=='`')
				continue;
			for(int i=0 ; i<4 ; i++){
				if(done)
					break;
				for(int j=0 ; j<13 ; j++){
					if(words[k]==keyboard[i][j]){
						words[k]=keyboard[i][j-1];
						done=true;
						break;
					}
				}
			}
		}
		cout<<words<<"\n";
	}

 return 0 ;
}

