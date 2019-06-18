#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;




void Subset_Sorted(int be ,vector<int> &inp, vector<vector<int> > &result, vector<int> &row){

	if(be==inp.size()){

		int s = result.size();
		// if(s>0){
		// 	sort(result.begin(),result.end(),greater<vector<int> >());
		// 	int i=0;

		// 	if(result[s-1].size()==row.size()){
		// 		while(i!=row.size()){
		// 			if(result[s-1][i]!=row[i]){
		// 				result.push_back(row);
		// 				return;
		// 				//break;
		// 			}

		// 			i++;
		// 		}

		// 		//result.push_back(row);

		// 		return;
		// 	}

			
		// 	result.push_back(row);
		// 	return;
		// }

		
		// 	result.push_back(row);
		// 	return ;
		

		result.push_back(row);
		return ;

		
	}

	// int cur_idx = be+1;
	// while()


	//left side
	row.push_back(inp[be]);

	Subset_Sorted(be+1,inp,result,row);

	row.pop_back();
	Subset_Sorted(be+1,inp,result,row);


	 //right side

	// Subset_Sorted(be+1,inp,result,row);
	// row.push_back(inp[be]);
	// Subset_Sorted(be+1,inp,result,row);
	// row.pop_back();
}



int main(){


	int N;
	cin>>N;


	vector<int> v;

	int num;

	for(int i=0;i<N;++i){

		cin>>num;
		v.push_back(num);
	}

	vector<vector<int> > ans;

	vector<int> res;

	sort(v.begin(),v.end());

	Subset_Sorted(0,v,ans,res);

	//sort(ans.begin(),ans.end());

	//RemoveDuplicate(v);

	cout<<endl;

	for(auto i = ans.begin() ; i<ans.end() ; i++){

     for(auto j = i->begin() ; j<i->end() ; j++)
        cout << *j <<" ";

     cout <<"\n";  
  }


return 0;

}