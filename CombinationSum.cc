#include <iostream>
#include <vector>
using namespace std;




void CombinationSum(vector<int> &inp,vector<vector<int> >&result,vector<int> &temp,int sum,int i){

	if(sum<0){
		return;
	}

	if(sum==0){

		result.push_back(temp);

		return;
	}


	while(i<inp.size() && sum-inp[i] >= 0){

		temp.push_back(inp[i]);

		CombinationSum(inp,result,temp,sum-inp[i],i);
		++i;

		temp.pop_back();
	}


	// for(int pos = i ;pos<inp.size();++pos){

	//  if(pos!=be && inp[be]==inp[be-1])
	// 	if(inp[pos]>sum){
	// 		break;
	// 	}
	// 	temp.push_back(inp[pos]);
	// 	CombinationSum(inp,result,temp,sum-inp[pos],i);
	// 	temp.pop_back();
	// }
}

int main(){


	int N;
	cin>>N;

	int key;
	cin>>key;

	vector<int> v;
	int inp;

	for(int i=0;i<N;++i){
		cin>>inp;
		v.push_back(inp);
	}

	sort(v.begin(),v.end());

	v.erase(unique(v.begin(),v.end()),v.end());

	vector<vector<int> > result;

	vector<int> temp;

	CombinationSum(v,result,temp,key,0);
	

	for(int i=0;i<result.size();++i){
		for(int j=0;j<result[i].size();++j){
			cout<<result[i][j]<<",";
		}
		cout<<endl;
	}
	return 0;
}