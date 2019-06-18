#include <iostream>
#include<stack>
#include<string>
using namespace std;


bool Balanced_Paranthesis(string &s){


	 stack<char> stk;

    bool isBalanced = true;

    for(int i=0;i<s.length();++i){
        if(s[i]=='{' || s[i]=='(' || s[i]=='['){
            stk.push(s[i]);
            continue;
        }

        if(stk.empty()){
        	return "NO";
        }
        if(s[i] == ')'){
            if(stk.top()!='('){
               return "NO";
            }
            stk.pop();
            continue;
        }

        else if(s[i] == ']'){
            if(stk.top()!='['){
                return "NO";
                //break;
            }

            stk.pop();
            continue;
        }
        else if(s[i] == '}'){
            if(stk.top()!='{'){
               return "NO";
            }

            stk.pop();
            continue;
        }
    }

   return (stk.empty());
}


int main(){
	string s;
	cin>>s;

	bool ans =  Balanced_Paranthesis(s);
	//cout<<No_Of_Redundant_Parenthesis;
	// if(No_Of_Redundant_Parenthesis==0){
	// 	cout<<"false";
	// }
	// else{
	// 	cout<<"true";
	// }

	if(ans){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

	//cout<<ans<<endl;

	return 0;
}

