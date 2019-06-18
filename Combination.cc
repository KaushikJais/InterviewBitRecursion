#include <iostream>
#include <vector>
using namespace std;



void Combination(int be,int en,int k,vector<vector<int> > &result,vector<int> &temp){


    if(k==0){

        result.push_back(temp);

        return;

    }


    for(int i=be;i<=en;++i){

        temp.push_back(i);
        Combination(i+1,en,k-1,result,temp);
        temp.pop_back();
    }
}

int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;
    
    vector<vector<int> > result;

    vector<int> temp;

    Combination(1,n,k,result,temp);

    sort(result.begin(),result.end());

    for(int i=0;i<result.size();++i){
        for(int j=0;j<k;++j){
            cout<<result[i][j]<<",";
        }
        cout<<endl;
    }

    return 0;
}