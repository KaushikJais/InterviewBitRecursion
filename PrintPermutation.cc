#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;




void PrintPermutation(string &s,int be){

	if(s[be]=='\0'){
		cout<<s<<",";
		return;
	}

	for(int pos = be;s[pos]!='\0';++pos){
		swap(s[pos],s[be]);
		PrintPermutation(s,be+1);
		swap(s[pos],s[be]);
	}
}


void vect_permutation(vector<int> &A,int be,vector<vector<int> >&result){

	if(be==A.size()){
		result.push_back(A);
	}

	for(int pos = be ;pos<A.size();++pos){
		swap(A[pos],A[be]);
		vect_permutation(A,be+1,result);
		swap(A[pos],A[be]);
	}
}

int main(){


	// string s;
	// cin>>s;
	int n;
	cin>>n;
	// int k;
	// cin>>k;

	vector<int> A;
	int inp;

	for(int i=0;i<n;++i){
		cin>>inp;
		A.push_back(inp);
	}

	vector<vector<int> > result;

	//vector<int> out;

	vect_permutation(A,0,result);

	sort(result.begin(),result.end());

	for(int i=0;i<result.size();++i){
		for(int j=0;j<n;++j){
			cout<<result[i][j]<<",";
		}
		cout<<endl;
	}


	//PrintPermutation(s,0);

	return 0;
}