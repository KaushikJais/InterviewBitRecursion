#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;





int LinearSearchRecursively(int arr[],int index,int key,int N){

	if(index == N){
		return -1;
	}

	if(arr[index]==key){
		return index;
	}

	int ans = LinearSearchRecursively(arr,index+1,key,N);
	return ans;
}

int main(){


	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;++i){

		cin>>arr[i];
	}

	int i=0;
	int key;
	cin>>key;

	int ans = LinearSearchRecursively(arr,i,key,N);

	cout<<ans<<endl;

	return ans;
}