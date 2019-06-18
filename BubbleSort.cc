#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;


void BubbleSort_Rec(int arr[],int N){
	if(N==1) return;

	//sort one element;

	for(int cur = 0; cur<=N-2;++cur){
		if(arr[cur]>arr[cur+1]){
			swap(arr[cur],arr[cur+1]);
		}
	}


	BubbleSort_Rec(arr,N-1);
}


void BubbleSort_Rec_2(int arr[], int be,int en){
	if(be>=en){
		return;
	}

	BubbleSort_Rec_2(arr,be+1,en);
	if(arr[be]>arr[be+1]){
		swap(arr[be],arr[be+1]);
		BubbleSort_Rec_2(arr,be+1,en);
	}
}

bool MyCompare(int a,int b){
	return a>b;
}

int main(){


	int N;
	cin>>N;

	int arr[N];
	for(int i=0;i<N;++i){
		cin>>arr[i];
	}

	// //BubbleSort_Rec(arr,N);
	// BubbleSort_Rec_2(arr,0,N-1);
	sort(arr,arr+N,MyCompare);
	for(int i=0;i<N;++i){

		cout<<arr[i]<<endl;
	}

	return 0;

}