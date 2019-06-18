#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


string ArrayString(int n){

	string num[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

	return num[n];
}

void Print2048(int N){

	if(N==0){
		return ;
	}

	Print2048(N/10);
	cout<<ArrayString(N%10);
	return;
}

int main(){


	int N;
	cin>>N;

	Print2048(N);

	return 0;
}