#include <iostream>
#include <cstring>
#include <string.h>
#include <algorithm>
#include <cmath>
using namespace std;


int TilingProb(int n,int m){
	

	// t= tile length
	// //No of Columns
	// if(c == 1 || c == t){
	// 	return c;
	// }

	// int ans = TilingProb(t,c-1) + TilingProb(t,c-t);

	// return ans;
	if(m>n && n>=1){
		return 1;
	}
	else if(m==n){
		return 2;
	}

	int ans = TilingProb(n-1,m) + TilingProb(n-m,m);

	return ans;

}

int main(){


	int tile_size;
	cin>>tile_size;
	int col;
	cin>>col;

	int ans = TilingProb(tile_size,col);

	cout<<ans<<endl;

	return 0;

}