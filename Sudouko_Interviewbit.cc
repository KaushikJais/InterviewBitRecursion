#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
using namespace std;


bool CanPlace(vector<vector<string> > &board,int row,int col,int dim,int num){

	for(int x = 0;x<dim;++x){
		if(board[x][col] == to_string(num) || board[row][x] == to_string(num)) {

			return false;
		}
	}

	int rootN = sqrt(dim);

	int SubMatbeginrow = row - row%rootN;

	int SubMatbegincol = col - col%rootN;

	for(int i=SubMatbeginrow ; i < SubMatbeginrow + rootN ;++i){

		for(int j=SubMatbegincol ; j < SubMatbegincol + rootN ; ++j){

			if(board[i][j] == to_string(num)){
				return false;
			}
		}
	}

	return true;
}



bool Sudoku_Solver(vector<vector<string> > &return_board,vector<vector<string> > &board,int row,int col,int dim){


	if(row>=dim) return true;

	if(col>=dim) {

		return Sudoku_Solver(return_board,board,row+1,0,dim);
	}

	if(board[row][col] != "."){
		return Sudoku_Solver(return_board,board,row,col+1,dim);
	}


	for(int num = 1 ;num <=dim ;++num){

		if(CanPlace(board,row,col,dim,num)){

			board[row][col] = to_string(num);

			bool isSuccess = Sudoku_Solver(return_board,board,row,col+1,dim);

			if(isSuccess){
				return true;
			}

			board[row][col] = ".";
		}
	}

	return false;
}


int main(){


	int N;
	cin>>N;

	vector<string> row(N,".");

	vector<vector<string> > board;
	for (int i = 0; i<N; ++i)
        board.push_back(row);

    vector<vector<string> > return_board;

    bool ans  = Sudoku_Solver(return_board,board,0,0,N);


    for(int i=0;i<board.size();++i){
    	for(int j=0;j<board[i].size();++j){
    		cout<<board[i][j]<<" ";
    	}
    	cout<<endl;
    }

    //cout<<ans<<endl;

    return ans;
}