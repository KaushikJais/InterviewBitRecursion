#include <iostream>
#include <cstring>
using namespace std;



void Recursion_pattern(int n){
	if(n==0){
		return;
	}

	//Recursion_pattern(n-1);

	for(int i=0;i<n;++i){
		cout<<"*"<<'\t';
	}
	cout<<endl;
	Recursion_pattern(n-1);
}


int main(){

	int N;
	cin>>N;

	Recursion_pattern(N);

	return 0;
}