#include <iostream>
#include <vector>
using namespace std;





void AllIndices(int arr[],int be,int en,int key,vector<int> &v){
	if(be>en){
		return;
	}

	if(arr[be]==key){
		v.push_back(be);
	}

	AllIndices(arr,be+1,en,key,v);
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

	vector<int> ind;

	AllIndices(arr,0,N-1,key,ind);

	for(int i=0;i<ind.size();++i){
		cout<<ind[i]<<" ";
	}

	return 0;
}