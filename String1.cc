#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool compareString(string A, string B){
    for(int i = 0, j = 0; i < A.size() && j < B.size(); ++i, ++j){
        // if (A[i] > B[j]) return true;
        // else if (A[i] < B[j]) return false;

        if (A[i] != B[j]) return A[i] > B[j];

    }
    return false;
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



void Subset(string &inp ,int be,string &ans,vector<string> &v){
    
    if(be==inp.size()){
        v.push_back(ans);
        return;
    }
    

    //left side
    ans += inp[be];
    Subset(inp,be+1,ans,v);
    ans.erase(ans.begin()+ans.size()-1);
    Subset(inp,be+1,ans,v);
    //ans.erase(ans.begin()+ans.size()-1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    string s;
    cin>>s;

    sort(s.begin(),s.end());
    
    vector<string> v;
    string ans ="";
    Subset(s,0,ans,v);
    //sbubbleSort(v,v.size(),compareString);
    //sort(v.begin(),v.end(),compareString);
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<endl;
    }
    return 0;
}