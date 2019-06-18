#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;



int BinarySearchRecu(int arr[],int be,int en, int key){

	if(be>en) return -1;

	int mid = (be+en)/2;

	if(arr[mid]==key) return mid;

	else if(arr[mid]<key){
		  return BinarySearchRecu(arr,mid+1,en,key);
	}
	else{
		return BinarySearchRecu(arr,be,mid-1,key);
	}
}

int main(){

	int N;
	cin>>N;

	int arr[N];
	for(int i=0; i<N;++i){
		cin>>arr[i];
	}

	int key;
	cin>>key;

	int index = BinarySearchRecu(arr,0,N-1,key);

	cout<<index<<endl;

	return 0;
}