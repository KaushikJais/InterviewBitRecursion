#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;



int NthFibo(int n){


	if(n==0 || n==1){

		return n;
	}


	int ans = NthFibo(n-1) + NthFibo(n-2);

	return ans;
}

int main(){

	int N;
	cin>>N;


	int res = NthFibo(N);

	cout<<res<<endl;

	return 0;
}