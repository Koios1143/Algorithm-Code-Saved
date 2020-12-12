#include<iostream>
using namespace std;
int game=1;
int pb[2][2]={{1,-1},{1,1}},pw[2][2]={{-1,-1},{-1,1}};
int knight[8][2]={{-1,-2},{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2}};
char board[10][10];
bool cango(int x,int y){
	if(x<0 || x>=8 || y<0 || y>=8) return false;
	return true;
}
bool rock(int x, int y, int color){
	char king;
	if(color==0)
		king='K';
	else
		king='k';
	for(int i=x-1 ; i>=0 ; i--){
		//up
		if(board[i][y]==king)
			return true;
		else if(board[i][y]!='.')
			break;
	}
	for(int i=x+1 ; i<8 ; i++){
		//down
		if(board[i][y]==king)
			return true;
		else if(board[i][y]!='.')
			break;
	}
	for(int i=y-1 ; i>=0 ; i--){
		//left
		if(board[x][i]==king)
			return true;
		else if(board[x][i]!='.')
			break;
	}
	for(int i=y+1 ; i<8 ; i++){
		//right
		if(board[x][i]==king)
			return true;
		else if(board[x][i]!='.')
			break;
	}
	return false;
}
bool bishop(int x,int y,int color){
	char king;
	if(color==0)
		king='K';
	else
		king='k';
	for(int i=x-1, j=y+1 ; i>=0 && j<8 ; i--, j++){
		// upper right
		if(board[i][j]==king)
			return true;
		else if(board[i][j]!='.')
			break;
	}
	for(int i=x-1, j=y-1 ; i>=0 && j>=0 ; i--, j--){
		// upper left
		if(board[i][j]==king)
			return true;
		else if(board[i][j]!='.')
			break;
	}
	for(int i=x+1, j=y+1 ; i<8 && j<8 ; i++, j++){
		// lower right
		if(board[i][j]==king)
			return true;
		else if(board[i][j]!='.')
			break;
	}
	for(int i=x+1, j=y-1 ; i<8 && j>=0 ; i++, j--){
		// upper left
		if(board[i][j]==king)
			return true;
		else if(board[i][j]!='.')
			break;
	}
	return false;
}
bool check_over(char chess, int x, int y, int color){
	char ch=tolower(chess);
	if(ch=='p'){
		// pawn
		if(color==0){
			// black
			for(int i=0 ; i<2 ; i++){
				int nx=x+pb[i][0];
				int ny=y+pb[i][1];
				if(cango(nx,ny) && board[nx][ny]=='K')
					return true;
			}
		}
		else{
			//white
			for(int i=0 ; i<2 ; i++){
				int nx=x+pw[i][0];
				int ny=y+pw[i][1];
				if(cango(nx,ny) && board[nx][ny]=='k')
					return true;
			}
		}
	}
	else if(ch=='r'){
		// rook
		return rock(x,y,color);
	}
	else if(ch=='b'){
		// bishop
		return bishop(x,y,color);
	}
	else if(ch=='q'){
		// queen
		return rock(x,y,color) || bishop(x,y,color);
	}
	else if(ch=='n'){
		// knight
		char king;
		if(color==0)
			king='K';
		else
			king='k';
		for(int i=0 ; i<8 ; i++){
			int nx=x+knight[i][0];
			int ny=y+knight[i][1];
			if(cango(nx,ny) && board[nx][ny]==king)
				return true;
		}
		return false;
	}
	return false;
}
int main(){
	while(true){
		bool end=false;
		for(int i=0 ; i<8 ; i++){
			for(int j=0 ; j<8 ; j++){
				cin>>board[i][j];
				if(board[i][j]!='.')
					end=true;
			}
		}
		if(!end)
			break;
		bool found=false;
		for(int i=0 ; i<8 && !found ; i++){
			for(int j=0 ; j<8 && !found ; j++){
				if(board[i][j]=='.' || board[i][j]=='k' || board[i][j]=='K')
					continue;
				if(islower(board[i][j])){
					// black
					if(check_over(board[i][j], i, j, 0)){
						cout<<"Game #"<<game<<": white king is in check.\n";
						game++;
						found=true;
					}
				}
				else{
					// white
					if(check_over(board[i][j], i, j, 1)){
						cout<<"Game #"<<game<<": black king is in check.\n";
						game++;
						found=true;
					}
				}
			}
		}
		if(!found){
			cout<<"Game #"<<game<<": no king is in check.\n";
			game++;
		}
	}
	return 0;
}

