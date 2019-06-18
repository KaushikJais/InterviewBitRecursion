#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;


bool IsContained(int arr[],int be,int en,int num){

	if(be>en){
		return false;
	}


	if(arr[be]==num) return true;


	bool ans = IsContained(arr,be+1,en,num);
	return ans;
}


int main(){

	int N;
	cin>>N;

	int key;
	cin>>key;

	int arr[N];
	for(int i=0;i<N;++i){
		cin>>arr[i];
	}

	bool ans = IsContained(arr,0,N-1,key);

	if(ans == true){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

	return 0;
}