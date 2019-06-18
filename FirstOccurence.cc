#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;




int FirstIndex(int arr[],int be ,int en,int key){

	if(be>en){
		return -1;
	}

	if(arr[be]==key){
		return be;
	}

	return FirstIndex(arr,be+1,en,key);
}


int LastIndex(int arr[],int be,int en,int key){
	if(en<be){
		return -1;
	}

	if(arr[en]==key){
		return en;
	}

	return LastIndex(arr,be,en-1,key);
}


int main(){



	int N;
	cin>>N;


	int arr[N];
	for(int i=0;i<N;++i){
		cin>>arr[i];
	}


	int key;
	cin>>key;


	//int idx = FirstIndex(arr,0,N-1,key);
	int idx = LastIndex(arr,0,N-1,key);
	cout<<idx<<endl;

	return 0;


}