#include <iostream>
#include <cstring>
using namespace std;



bool isArraySorted(int *a , int n){

	if(n==1){

		return true;
	}

	if(a[0]<a[1] && isArraySorted(a+1,n-1)){
		return true;
	}

	return false;
}

int main(){


	int N;
	cin>>N;



	int arr[N];

	for(int i=0;i<N;++i){
		cin>>arr[i];
	}


	if(isArraySorted(arr,N)){
		cout<<"Yes Sorted!"<<endl;
	}

	else{
		cout<<"Not Sorted"<<endl;
	}

	return 0;
}