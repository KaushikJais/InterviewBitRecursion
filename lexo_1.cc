#include<iostream>

#include<vector>
#include<cstring>
using namespace std;


bool compareString(string A, string B){
    for(int i = 0, j = 0; i < A.size() && j < B.size(); ++i, ++j){
        // if (A[i] > B[j]) return true;
        // else if (A[i] < B[j]) return false;

        if (A[i] != B[j]) return A[i] < B[j];

    }
    return true;
}

template<typename T, typename Y>
void bubbleSort(T& arr, int n, Y compare){
     for(int i = 0; i < n - 1; ++i){
         for(int cur = 0; cur < n - i - 1; ++cur){
            
            if (compare(arr[cur], arr[cur+1])){
                // it returns true if arr[i] > arr[i + 1]
                swap(arr[cur], arr[cur + 1]);
             }
         }
     }
 }


void Subsequences_lexographical(char inp[],int be,char out[],int j,vector<string>&v)
{
	if(inp[be]=='\0')
	{
		out[j]='\0';
		
		v.push_back(out);
		
		return;

	}
	out[j]=inp[be];

	Subsequences_lexographical(inp,be+1,out,j+1,v);
	
	Subsequences_lexographical(inp,be+1,out,j,v);
	
}


int main(){
	int N;
	cin>>N;
	
	for(int i=0;i<N;i++){

		char arr[1000];
		cin>>arr;

		char new_arr[100];
		vector<string> v;

		Subsequences_lexographical(arr,0,new_arr,0,v);

		//bubbleSort(v,v.size(),compareString);

		for(int k=0;k<v.size();k++){
			cout<<v[k]<<endl;
		}
	}


}