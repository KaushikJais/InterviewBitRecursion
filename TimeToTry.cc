#include <iostream>
#include <cstring>
using namespace std;


int PowerTry(int a,int b){


	if(b==0){
		return 1;
	}

	int ans = a * PowerTry(a,b-1);

	return ans;
}


int FastPower(int a , int b){

	if(b==0){

		return 1;
	}

	int Smallerans = FastPower(a,b/2);
	Smallerans *= Smallerans;

	if(b%2!=0){
		Smallerans = a * Smallerans;
		return Smallerans;
	}

	return Smallerans;
}


int main(){


	int a;
	int b;

	cin>>a;
	cin>>b;

	int ans = PowerTry(a,b);

	cout<<ans<<endl;


	return 0;
}