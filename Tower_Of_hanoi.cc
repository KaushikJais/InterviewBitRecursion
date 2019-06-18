#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;



void TowerofHanoi(int n,char src,char dest,char helper){

	if(n==0){
		return;
	}

	TowerofHanoi(n-1,src,helper,dest);

	cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;

	TowerofHanoi(n-1,helper,dest,src);
}

int main(){


	int N;
	cin>>N;

	TowerofHanoi(N,'A','C','B');

	return 0;
}