#include <iostream>
#include <algorithm>
using namespace std;


void Merge(int arr[],int be,int en){

	int mid = (be+en)/2;

	int i=be;
	int j = mid+1;

	int k=be;

	int temp[1000];

	while(i<=mid && j<=en){
		if(arr[i]<arr[j]){
			temp[k++] = arr[i++];
		}
		else{
			temp[k++] = arr[j++];
		}
	}

	while(i<=mid){
		temp[k++] = arr[i++];
	}

	while(j<=en){
		temp[k++] = arr[j++];
	}

	for(int i=be;i<=en;++i){
		arr[i] = temp[i];
	}
}





void MergeSort(int arr[],int be,int en){

	if(be>=en){
		return;
	}

	int mid = (be+en)/2;

	MergeSort(arr,be,mid);
	MergeSort(arr,mid+1,en);

	Merge(arr,be,en);
}


int main(){



	int N;
	cin>>N;


	int arr[N];

	for(int i=0;i<N;++i){
		cin>>arr[i];
	}

	MergeSort(arr,0,N-1);

	for(int i=0;i<N;++i){
		cout<<arr[i]<<endl;
	}


	return 0;
}