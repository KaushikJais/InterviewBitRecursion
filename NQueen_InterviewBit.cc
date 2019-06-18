#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string.h>
using namespace std;


void outputMat(char mat[][100], int m, int n) {
    cout << "\n-----MAT Begins----\n";
    for (int r = 0; r < m; ++r) {
        for (int c = 0; c < n; ++c) {
            cout << mat[r][c] << " ";
        }
        cout << endl;
    }
    cout << "-----MAT Ends------\n";
}

bool Canplace(vector<vector<string> > &board,int row,int col,int dim){

	for(int x=0;x<row;++x){

		if(board[x][col]=="Q"){
			return false;
		}
	}


	int rowDir[] = {-1,-1};
	int colDir[] = {+1,-1};

	for(int dir = 0; dir<2;++dir){

		for(int dist = 1 ;dist < dim ;++dist){

			int nextRow = row + (dist * rowDir[dir]);

			int nextCol = col + (dist * colDir[dir]);

			if((nextRow<0 || nextRow >=dim ) || (nextCol<0 || nextCol >=dim)){

				break;
			}

			if(board[nextRow][nextCol] == "Q"){

				return false;
			}
		}
	}

	return true;
}




bool NQueen_Solve(vector<vector<string> > &return_board,vector<vector<string> > &board,int row,int dim,int &cnt){

	if(row==dim){

		vector<string> empty_row;

		return_board.push_back(empty_row);

		int size = return_board.size();

		for(int i=0;i<dim;++i){
			string row_chess = "";

			for(int j=0;j<dim;++j ){
				row_chess += board[i][j];
			}

			return_board[size-1].push_back(row_chess);
		}

		return false;
	}

	for(int col =0 ;col < dim;++col){

		bool check = Canplace(board,row,col,dim);
		if(check == true){
			board[row][col] ="Q";
			bool success = NQueen_Solve(return_board,board,row+1,dim,cnt);
			if(success){
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

	int cnt=0;
	vector<vector<string> > return_board;

	vector<string> row(N,".");

	vector<vector<string> > board;
	for (int i = 0; i<N; ++i)
        board.push_back(row);
	bool ans = NQueen_Solve(return_board,board,0,N,cnt);

	

	cout<<cnt<<endl;

	// if(ans){ 



	// 	for(int i=0;i<N;++i){
	// 		for(int j=0;j<N;++j){
	// 			cout<<board[i][j]<<" ";
	// 		}
	// 		cout<<endl;
	// 	}

	// }
	// else{
	// 	cout<<"NO";
	// }

	for(int i=0;i<return_board.size();++i){
		
		cout<<return_board[i];
		cout<<endl;
	}
	

	return 0;
}