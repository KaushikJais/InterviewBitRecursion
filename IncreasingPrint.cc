#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;


void decreasingPrint(int n){

	if(n==0){
		//cout<<0<<endl;
		return;
	}

	cout<<n<<endl;
	decreasingPrint(n-1);
}



void PrintIncreasing(int n){
		if(n==0) return;

		PrintIncreasing(n-1);
		cout<<n<<endl;
}



int Multiply(int a,int b){
	// if(b==0){
	// 	return 1;
	// }

	// if(b<0){
	// 		int ans = a * Multiply(a,b+1);

	// 		ans = ans * -1;
	// 		return ans;
	// }
	

	// int ans = a * Multiply(a,b-1);

	// return ans;
	if(a<b){
		return Multiply(b,a);
	}

	else if(b!=0){

		if(b<0){
			int ans = a + Multiply(a,b+1);
		return (ans*-1);
		}
		else{
			int ans = a + Multiply(a,b-1);
		return ans;
		}
		
	}

	return 0;

	
}

int main(){


	int a;
	cin>>a;
	int b;
	cin>>b;

	//PrintIncreasing(N);

	//decreasingPrint(N);

	int res = Multiply(a,b);
	cout<<res<<endl;
	return 0;
}